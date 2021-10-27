/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 20:39:06 by ysaito            #+#    #+#             */
/*   Updated: 2021/10/27 18:17:15 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "span.hpp"

# define RANDOM_RANGE 100000
# define SPAN_LANGE 10000

int main()
{
	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << "shortest: " << sp.shortestSpan() << std::endl;
	std::cout << " longest: " << sp.longestSpan() << std::endl;

	Span	test1(sp);
	Span	test2 = sp;

	try
	{
		sp.addNumber(20);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

/*********************/
/* No numbers stored */
/*********************/
	std::cout << "\n----- No numbers stored -----" << std::endl;

	Span empty_sp = Span(3);
	try
	{
		std::cout << "shortest: " << empty_sp.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << " longest: " << empty_sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
/*******************/
/* Stored only one */
/*******************/
	std::cout << "\n----- Stored only one -----" << std::endl;

	Span one_sp = Span(3);
	one_sp.addNumber(1);
	try
	{
		std::cout << "shortest: " << one_sp.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << " longest: " << one_sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

/**********/
/* random */
/**********/
	std::cout << "\n----- Random -----" << std::endl;

	std::vector<int> large_vec(RANDOM_RANGE);
	VectorIterator	itr = large_vec.begin();
	VectorIterator	itr_end = large_vec.end();

	srand(time(NULL));
	VectorIterator tmp = itr;
   	for (; tmp != itr_end; ++tmp)
	{
       	*tmp = rand() % RANDOM_RANGE;
    }
	try
	{
		Span	large_span(SPAN_LANGE);

		large_span.addNumberFromItr(itr, itr + SPAN_LANGE);
		large_span.printNumber(5);
		large_span.printNumberEnd(5);

		std::cout << "shortest: " << large_span.shortestSpan() << std::endl;
		std::cout << " longest: " << large_span.longestSpan() << std::endl;

		large_span.addNumber(10);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}