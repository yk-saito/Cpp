/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 20:39:06 by ysaito            #+#    #+#             */
/*   Updated: 2021/10/26 22:44:49 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "span.hpp"

int main()
{
	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	//de
	std::vector<int>::iterator it = sp.begin();
	std::cout << "----- check vector elements -----" << std::endl;
	for (int i = 0; i < 5; i++)
	{
		std::cout << *it << std::endl;
		it++;
	}
	std::cout << "---------------------------------" << std::endl;
	//de
	try
	{
		sp.addNumber(20);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

/*
**	No numbers stored
*/
	std::cout << "\n----- No numbers stored -----" << std::endl;
	Span empty_sp = Span(3);

	try
	{
		std::cout << empty_sp.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << empty_sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
/*
**	Stored only one
*/
	std::cout << "\n----- Stored only one -----" << std::endl;

	Span one_sp = Span(3);
	one_sp.addNumber(1);
	try
	{
		std::cout << one_sp.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << one_sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

/*
** 10000
*/
	std::cout << "\n----- 10000 -----" << std::endl;
	try
	{
		Span	large_sp(10000);
		std::vector<int>::iterator itr = large_sp.begin();
		std::vector<int>::iterator itr_end = large_sp.end();

		srand(time(NULL));
		int	count = 0;//del
   		for (; itr != itr_end; ++itr)
		{
        	*itr = rand();
			std::cout << *itr << std::endl;
			count++;
			// itr++;
    	}
		std::cout << one_sp.shortestSpan() << std::endl;
		std::cout << one_sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}