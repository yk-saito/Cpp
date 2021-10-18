/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 19:40:49 by ysaito            #+#    #+#             */
/*   Updated: 2021/09/16 10:26:12 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
	: name_("None"),
	  grade_(1)
{}

Bureaucrat::Bureaucrat(const std::string name, int grade)
	: name_(name),
	  grade_(grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : name_(other.name_)
{
	*this = other;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
	if (this != &other)
		this->grade_ = other.grade_;
	return (*this);
}

Bureaucrat::~Bureaucrat() {}

std::string	Bureaucrat::getName() const
{
	return (this->name_);
}

int	Bureaucrat::getGrade() const
{
	return (this->grade_);
}

void	Bureaucrat::incGrade()
{
	if (this->grade_ <= 1)
		throw Bureaucrat::GradeTooHighException();
	this->grade_--;
}

void	Bureaucrat::decGrade()
{
	if (this->grade_ >= 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade_++;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Bureaucrat::GradeTooHighException";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Bureaucrat::GradeTooLowException";
}

std::ostream&	operator<<(std::ostream& os, const Bureaucrat& bureaucrat_obj)
{
	os << "[" << bureaucrat_obj.getName()
	   << "] bureaucrat grade: " << bureaucrat_obj.getGrade();
	return (os);
}
