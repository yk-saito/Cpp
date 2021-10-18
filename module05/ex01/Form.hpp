/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 16:30:50 by ysaito            #+#    #+#             */
/*   Updated: 2021/09/14 15:32:39 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <exception>
#include <iostream>
#include <string>

class Bureaucrat;

class Form
{
public:
	Form();
	Form(std::string name, int sign_grade, int exec_grade);
	Form(const Form &other);
	Form &operator=(const Form &other);
	~Form();
	std::string	getName() const;
	bool		getSigned() const;
	int			getSignGrade() const;
	int			getExecGrade() const;
	void		beSigned(Bureaucrat const &obj);
private:
	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
	const std::string	name_;
	bool				signed_;
	const int			sign_grade_;
	const int			exec_grade_;
};

std::ostream& operator<<(std::ostream& os, const Form& form_obj);

#endif
