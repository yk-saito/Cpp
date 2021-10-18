/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 20:53:34 by ysaito            #+#    #+#             */
/*   Updated: 2021/09/16 10:26:21 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <exception>
#include <iostream>
#include <string>

#include "Bureaucrat.hpp"

int	main()
{
	std::cout <<  "-----bureaucratA-----" << std::endl;
	try
	{
		Bureaucrat	bureaucratA("Alice", 1);

		std::cout << bureaucratA << std::endl;
		bureaucratA.decGrade(); // grade=2
		std::cout << bureaucratA << std::endl;
		bureaucratA.incGrade(); // grade=1
		std::cout << bureaucratA << std::endl;
		bureaucratA.incGrade(); // grade=0 Too High
		std::cout << bureaucratA << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout <<  "-----bureaucratB-----" << std::endl;
	try
	{	Bureaucrat	bureaucratB("Bob", 150);

		std::cout << bureaucratB << std::endl;
		bureaucratB.decGrade(); // grade=151 Too Low
		std::cout << bureaucratB << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout <<  "-----bureaucratC-----" << std::endl;
	try
	{
		Bureaucrat	bureaucratC("Carol", 151); // grade Too Low
		std::cout << bureaucratC << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout <<  "-----bureaucratD-----" << std::endl;
	try
	{
		Bureaucrat	bureaucratD("Dave", 0); // grade Too High
		std::cout << bureaucratD << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}