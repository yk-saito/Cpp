/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 11:32:31 by ysaito            #+#    #+#             */
/*   Updated: 2021/09/15 18:37:01 by ysaito           ###   ########.fr       */
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
	Form(std::string name, std::string target, int sign_grade, int exec_grade);
	Form(const Form &other);
	Form &operator=(const Form &other);
	virtual ~Form();
	std::string		getName() const;
	bool			getSigned() const;
	int				getSignGrade() const;
	int				getExecGrade() const;
	std::string		getTarget() const;
	void			beSigned(Bureaucrat const &obj);
	void			isExecute(Bureaucrat const &obj) const;
	virtual void	execute(Bureaucrat const &executor) const = 0;
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
	class FormUnsignException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
	const std::string	name_;
	bool				signed_;
	const int			sign_grade_;
	const int			exec_grade_;
	std::string			target_;
};

std::ostream& operator<<(std::ostream& os, const Form& form_obj);

#endif
