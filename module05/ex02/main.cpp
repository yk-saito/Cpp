/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 11:31:58 by ysaito            #+#    #+#             */
/*   Updated: 2021/09/16 16:23:22 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <exception>
#include <iostream>
#include <string>

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main()
{
	std::cout <<  "-----BureaucratA-----------------" << std::endl;
	try
	{
		Bureaucrat	b_alice("Alice", 1);
		std::cout << b_alice << std::endl;

		std::cout << "\n-----ShrubberyCreationForm------" << std::endl;

		ShrubberyCreationForm	s_form("Park1");

		std::cout << s_form << std::endl;
		b_alice.signForm(s_form);
		std::cout << s_form << std::endl;
		b_alice.executeForm(s_form);

		std::cout << "\n-----RobotomyRequestForm-------" << std::endl;

		RobotomyRequestForm	r_form("Robot1");

		std::cout << r_form << std::endl;
		b_alice.signForm(r_form);
		std::cout << r_form << std::endl;
		b_alice.executeForm(r_form);

		std::cout << "\n-----PresidentialPardonForm-----" << std::endl;

		PresidentialPardonForm	p_form("Home1");

		std::cout << p_form << std::endl;
		b_alice.signForm(p_form);
		std::cout << p_form << std::endl;
		b_alice.executeForm(p_form);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout <<  "\n-----BureaucratB( cannot executeForm:ShrubberyCreationForm )-----" << std::endl;
	try
	{	Bureaucrat	b_bob("Bob", 140);
		std::cout << b_bob << std::endl;

		std::cout << "\n-----ShrubberyCreationForm-----" << std::endl;

		ShrubberyCreationForm	s_form("Park2");

		std::cout << s_form << std::endl;
		b_bob.signForm(s_form);
		std::cout << s_form << std::endl;
		b_bob.executeForm(s_form);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout <<  "\n-----BureaucratB( cannot executeForm:RobotomyRequestForm )-----" << std::endl;
	try
	{	Bureaucrat	b_bob("Bob", 60);
		std::cout << b_bob << std::endl;

		std::cout << "\n-----RobotomyRequestForm-----" << std::endl;

		RobotomyRequestForm	r_form("Robot2");

		std::cout << r_form << std::endl;
		b_bob.signForm(r_form);
		std::cout << r_form << std::endl;
		b_bob.executeForm(r_form);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout <<  "\n-----BureaucratB( cannot executeForm:PresidentialPardonForm )-----" << std::endl;
	try
	{	Bureaucrat	b_bob("Bob", 25);
		std::cout << b_bob << std::endl;

		std::cout << "\n-----PresidentialPardonForm-----" << std::endl;

		PresidentialPardonForm	p_form("Target");

		std::cout << p_form << std::endl;
		b_bob.signForm(p_form);
		std::cout << p_form << std::endl;
		b_bob.executeForm(p_form);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout <<  "\n-----BureaucratC( Form not signed )-----" << std::endl;
	try
	{	Bureaucrat	c_bob("Carol", 25);
		std::cout << c_bob << std::endl;

		std::cout << "\n-----PresidentialPardonForm-----" << std::endl;

		PresidentialPardonForm	p_form("Target");

		std::cout << p_form << std::endl;
		c_bob.executeForm(p_form);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
