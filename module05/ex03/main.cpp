/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 11:31:58 by ysaito            #+#    #+#             */
/*   Updated: 2021/09/16 16:21:35 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <exception>
#include <iostream>
#include <string>

#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main()
{
	Intern	someRandomIntern;
	Form	*shrubbery_form;

	shrubbery_form = someRandomIntern.makeForm("shrubbery criation", "Home");
	if (shrubbery_form != NULL)
		std::cout << *shrubbery_form << std::endl;

	Form	*robotomy_form;

	robotomy_form = someRandomIntern.makeForm("robotomy request", "Bender");
	if (robotomy_form != NULL)
		std::cout << *robotomy_form << std::endl;

	Form	*president_form;

	president_form = someRandomIntern.makeForm("presidential pardon", "Target");
	if (president_form != NULL)
		std::cout << *president_form << std::endl;

	Form	*error_form;

	error_form = someRandomIntern.makeForm("error form", "Target");
	if (error_form != NULL)
		std::cout << *error_form << std::endl;

	delete shrubbery_form;
	delete robotomy_form;
	delete president_form;
	delete error_form;


	std::cout << "\n-----Form Execute-----" << std::endl;

	Form *form;

	form = someRandomIntern.makeForm("shrubbery criation", "Home");
	if (form == NULL)
		return (0);
	try
	{
		Bureaucrat	b_alice("Alice", 1);

		std::cout << b_alice << std::endl;
		std::cout << *form << std::endl;

		b_alice.signForm(*form);
		b_alice.executeForm(*form);

		std::cout << *form << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	delete form;
	return (0);
}
