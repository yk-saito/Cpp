/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 11:32:17 by ysaito            #+#    #+#             */
/*   Updated: 2021/09/15 21:32:29 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <exception>
#include <string>

class Form;

class Bureaucrat
{
public:
	Bureaucrat();
	Bureaucrat(const std::string name, int grade);
	Bureaucrat(const Bureaucrat &other);
	Bureaucrat &operator=(const Bureaucrat &other);
	~Bureaucrat();
	std::string	getName() const;
	int			getGrade() const;
	void		incGrade();
	void		decGrade();
	void		signForm(Form &form);
	void		executeForm(Form const &form);
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
	int					grade_;
};

std::ostream&	operator<<(std::ostream& os, const Bureaucrat& bureaucrat_obj);

#endif
