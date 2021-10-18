/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 11:32:25 by ysaito            #+#    #+#             */
/*   Updated: 2021/09/16 10:28:19 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <exception>
#include <iostream>

#include "Bureaucrat.hpp"
#include "Form.hpp"

Form::Form()
	: name_("None"),
	  signed_(false),
	  sign_grade_(1),
	  exec_grade_(1),
	  target_("None")
{}

Form::Form(std::string name, std::string target, int sign_grade, int exec_grade)
	: name_(name),
	  signed_(false),
	  sign_grade_(sign_grade),
	  exec_grade_(exec_grade),
	  target_(target)
{
	if (sign_grade < 1 || exec_grade < 1)
		throw Form::GradeTooHighException();
	else if (sign_grade > 150 || exec_grade > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form &other)
	: name_(other.name_),
	  sign_grade_(other.sign_grade_),
	  exec_grade_(other.exec_grade_)
{
	*this = other;
}

Form	&Form::operator=(const Form &other)
{
	if (this != &other)
		this->signed_ = other.signed_;
	return (*this);
}

Form::~Form() {}

std::string	Form::getName() const
{
	return (this->name_);
}

bool	Form::getSigned() const
{
	return (this->signed_);
}

int	Form::getSignGrade() const
{
	return (this->sign_grade_);
}

int	Form::getExecGrade() const
{
	return (this->exec_grade_);
}

std::string Form::getTarget() const
{
	return (this->target_);
}

void	Form::beSigned(Bureaucrat const &obj)
{
	if (obj.getGrade() > this->sign_grade_)
		throw Form::GradeTooLowException();
	this->signed_ = true;
}

void	Form::isExecute(Bureaucrat const &obj) const
{
	if (this->signed_ == false)
		throw Form::FormUnsignException();
	if (obj.getGrade() > this->exec_grade_)
		throw Form::GradeTooLowException();
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Form::GradeTooHighException");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Form::GradeTooLowException");
}

const char* Form::FormUnsignException::what() const throw()
{
	return ("Form::FormUnsignException");
}

std::ostream&	operator<<(std::ostream& os, const Form& form_obj)
{
	os << "*Form Name: " << form_obj.getName() << std::endl
	   << "*Signed: " << std::boolalpha << form_obj.getSigned() << std::endl
	   << "*Sign Grade: " << form_obj.getSignGrade() << std::endl
	   << "*Execute Grade: " << form_obj.getExecGrade() << std::endl
	   << "*Target: "  << form_obj.getTarget() << std::endl;
	return (os);
}
