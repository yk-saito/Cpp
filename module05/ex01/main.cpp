/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 16:30:44 by ysaito            #+#    #+#             */
/*   Updated: 2021/09/16 10:26:32 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <exception>
#include <iostream>
#include <string>

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main()
{
	std::cout <<  "-----bureaucratA-----" << std::endl;
	try
	{
		Bureaucrat	b_alice("Alice", 1);
		Form		formA("FormA", 10, 5);

		std::cout << b_alice << std::endl;
		std::cout << formA << std::endl;
		b_alice.signForm(formA);
		std::cout << formA << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout <<  "-----bureaucratB-----" << std::endl;
	try
	{	Bureaucrat	b_bob("Bob", 50);
		Form		formB("FormB", 20, 10);

		std::cout << b_bob << std::endl;
		std::cout << formB << std::endl;
		b_bob.signForm(formB);
		std::cout << formB << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
