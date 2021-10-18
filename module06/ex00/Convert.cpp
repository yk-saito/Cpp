/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 20:40:16 by ysaito            #+#    #+#             */
/*   Updated: 2021/10/13 00:12:54 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <iomanip>
#include <iostream>
#include <climits>
#include <sstream>
#include <string>

#include "Convert.hpp"

Convert::Convert()
	: result_(new int[4]()), minus_flag_(1),
	  pseudo_literal_(false), precision_(), suffix_f_(false),
	  to_c_(), to_i_(), to_f_(), to_d_()
{
	for (int i = 0; i < 4; i++)
	{
		this->result_[i] = IMPOSSIBLE;
	}
}

Convert::Convert(const std::string arg)
	: result_(new int[4]()), minus_flag_(1),
	  pseudo_literal_(false), precision_(), suffix_f_(false),
	  to_c_(), to_i_(), to_f_(), to_d_()
{
	for (int i = 0; i < 4; i++)
	{
		this->result_[i] = IMPOSSIBLE;
	}
	this->toEachType(arg);
}

Convert::Convert(const Convert &other)
{
	if (this != &other)
	{
		*this = other;
	}
}

Convert &Convert::operator=(const Convert &other)
{
	if (this == &other)
		return (*this);
	this->result_ = new int[4];
	for (int i = 0; i < 4; i++)
	{
		this->result_[i] = other.result_[i];
	}
	this->minus_flag_ = other.minus_flag_;
	this->pseudo_literal_ = other.pseudo_literal_;
	this->precision_ = other.precision_;
	this->suffix_f_ = other.suffix_f_;
	this->to_c_ = other.to_c_;
	this->to_i_ = other.to_i_;
	this->to_f_ = other.to_f_;
	this->to_d_ = other.to_d_;
	return (*this);
}

Convert::~Convert()
{
	delete[] this->result_;
}

const std::string	Convert::result_str_[3] = {
	"successful",
	"impossible",
	"Non displayable"
};

void	Convert::toEachType(const std::string arg)
{
	unsigned long	idx = 0;

	if (arg.size() == 0
		|| (arg.size() == 1 && (!std::isdigit(static_cast<unsigned char>(arg[0])))))
	{
		this->to_c_ = static_cast<char>(arg[0]);
		if (!(isprint(to_c_)))
			this->result_[CHAR] = NON_DISPLAYABLE;
		else
			this->result_[CHAR] = SUCCESSFUL;
		this->to_i_ = static_cast<int>(arg[0]);
		this->result_[INT] = SUCCESSFUL;
		this->to_f_ = static_cast<float>(arg[0]);
		this->result_[FLT] = SUCCESSFUL;
		this->to_d_ = static_cast<double>(arg[0]);
		this->result_[DBL] = SUCCESSFUL;
		this->precision_++;
		return ;
	}
	if (arg[idx] == '-' || arg[idx] == '+')
	{
		if (arg[idx] == '-')
			minus_flag_ = -1;
		idx++;
	}
	if (arg[idx] == '0' && (arg[idx + 1] != '.' && arg[idx + 1] != '\0')) // ex) 0123
		return ;
	this->pseudo_literal_ = this->isPseudoLiterals(arg);
	if (this->ftIsDigit(arg, idx) == false && this->pseudo_literal_ == false)
		return ;
	this->toChar(arg, idx);
	this->toInt(arg);
	this->toFloat(arg);
	this->toDouble(arg);
}

void	Convert::showConvert() const
{
	std::cout << "char: ";
	if (this->result_[CHAR] ==  SUCCESSFUL)
		std::cout << this->to_c_ << std::endl;
	else
		std::cout << this->result_str_[result_[CHAR]]  << std::endl;

	std::cout << "int: ";
	if (this->result_[INT] ==  SUCCESSFUL)
		std::cout << this->to_i_ << std::endl;
	else
		std::cout << this->result_str_[result_[INT]]  << std::endl;

	std::cout << "float: ";
	if (this->result_[FLT] ==  SUCCESSFUL)
		std::cout << std::fixed << std::setprecision(this->precision_)
				  << this->to_f_ << "f" << std::endl;
	else
		std::cout << this->result_str_[result_[FLT]]  << std::endl;

	std::cout << "double: ";
	if (this->result_[DBL] ==  SUCCESSFUL)
		std::cout << std::fixed << std::setprecision(this->precision_)
				  << this->to_d_ << std::endl;
	else
		std::cout << this->result_str_[result_[DBL]]  << std::endl;
}

bool	Convert::isPseudoLiterals(std::string arg)
{
	if (arg == "-inff" || arg == "+inff" || arg == "inff" || arg == "nanf"
		 || arg == "-inf" || arg == "+inf" || arg == "inf" || arg ==  "nan")
		return (true);
	return (false);
}

bool	Convert::ftIsDigit(const std::string arg, unsigned long idx)
{
	for (; idx < arg.size(); idx++)
	{
		if (!isdigit(static_cast<unsigned char>(arg[idx])))
		{
			if (arg[idx] == '.')
			{
				idx++;
				if (this->isDecPointVal(arg, idx) == false) // Error after the decimal point
					return (false);
				else
					break ;
			}
			else // Something character
				return (false);
		}
	}
	if (this->precision_ == 0)
		this->precision_++;
	return (true);
}

bool	Convert::isDecPointVal(std::string arg, unsigned long idx)
{
	if (arg[idx] == '\0') // ex)42.
		return (false);
	for (; idx < arg.size(); idx++)
	{
		if (isdigit(static_cast<unsigned char>(arg[idx])))
		{
			this->precision_++;
			continue ;
		}
		else if (arg[idx] == 'f' && arg[idx + 1] == '\0')
		{
			this->suffix_f_ = true;
			break ;
		}
		else
			return (false);
	}
	return (true);
}

void	Convert::toChar(std::string arg, unsigned long idx)
{
	int	arg_to_int = 0;

	if (this->pseudo_literal_ == true)
		return ;
	for (; idx < arg.size(); idx++)
	{
		if (arg[idx] == '.')
			break ;
		{
			arg_to_int = arg_to_int * 10 + (arg[idx] - '0');
			if ( (minus_flag_ * arg_to_int < CHAR_MIN)
				|| (minus_flag_ * arg_to_int > CHAR_MAX))
			{
				return ;
			}
		}
	}
	arg_to_int *= minus_flag_;
	if (!(isprint(arg_to_int)))
	{
		result_[CHAR] = NON_DISPLAYABLE;
		return ;
	}
	this->to_c_ = static_cast<char>(arg_to_int);
	result_[CHAR] = SUCCESSFUL;
}

void	Convert::toInt(std::string arg)
{
	if (this->pseudo_literal_  == true)
		return ;
	try
	{
		this->to_i_ = std::stoi(arg);
		this->result_[INT] = SUCCESSFUL;
	}
	catch(const std::exception& e)
	{
		// Do nothing
	}
}

void	Convert::toFloat(std::string arg)
{
	this->result_[FLT] = SUCCESSFUL;
	if (this->pseudo_literal_ == true)
	{
		this->to_f_ = std::stof(arg);
		return ;
	}
	try
	{
		this->to_f_ = std::stof(arg);
	}
	catch(const std::exception& e)
	{
		this->to_f_ = std::numeric_limits<float>::infinity() * minus_flag_;
	}
}

void	Convert::toDouble(std::string arg)
{
	this->result_[DBL] = SUCCESSFUL;

	if (this->pseudo_literal_ == true)
	{
		this->to_d_ =  std::stod(arg);
		return ;
	}
	try
	{
		if (this->suffix_f_ == true )
		{
			if (this->to_f_ == std::numeric_limits<float>::infinity())
				this->to_d_ = std::numeric_limits<double>::infinity();
			else if (this->to_f_ == (std::numeric_limits<float>::infinity() * -1))
				this->to_d_ = (std::numeric_limits<double>::infinity() * -1);
			else
				this->to_d_ = std::stof(arg);

		}
		else
			this->to_d_ = std::stod(arg);
	}
	catch(const std::exception& e)
	{
		this->to_d_ = std::numeric_limits<double>::infinity() * minus_flag_;
	}
}
