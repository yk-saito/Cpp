/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 20:39:20 by ysaito            #+#    #+#             */
/*   Updated: 2021/10/13 00:12:12 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <exception>

enum Type
{
	CHAR,
	INT,
	FLT,
	DBL
};

enum Result
{
	SUCCESSFUL,
	IMPOSSIBLE,
	NON_DISPLAYABLE
};

class Convert
{
public:
	Convert();
	Convert(const std::string arg);
	Convert(const Convert &other);
	Convert &operator=(const Convert &other);
	~Convert();
	void	toEachType(const std::string arg);
	void	showConvert() const;
private:
	bool	isPseudoLiterals(std::string arg);
	bool	ftIsDigit(const std::string arg, unsigned long idx);
	bool	isDecPointVal(std::string arg, unsigned long idx);
	void	toChar(const std::string arg, unsigned long idx);
	void	toInt(const std::string arg);
	void	toFloat(const std::string arg);
	void	toDouble(const std::string arg);
	static const std::string	result_str_[3];
	int		*result_;
	int		minus_flag_;
	bool	pseudo_literal_;
	int		precision_;
	bool	suffix_f_;
	char	to_c_;
	int		to_i_;
	float	to_f_;
	double	to_d_;
};

#endif /* CONVERT_HPP */
