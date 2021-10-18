/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 22:03:46 by ysaito            #+#    #+#             */
/*   Updated: 2021/10/11 21:03:58 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include <stdlib.h>
#include <time.h>

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base	*generate(void)
{
	srand((unsigned int)time(NULL));
	int	rand_num = rand() % 3;

	switch (rand_num)
	{
		case 0:
		{
			std::cout << "gererate A object" << std::endl;
			A	*a_p = new A();
			return (a_p);
		}
		case 1:
		{
			std::cout << "gererate B object" << std::endl;
			B	*b_p = new B();
			return (b_p);
		}
		case 2:
		{
			std::cout << "gererate C object" << std::endl;
			C	*c_p = new C();
			return (c_p) ;
		}
		default:
			std::cout << "Error generate...!!!" << std::endl;
			return (NULL);
	}
}

void	identify(Base* p)
{
	// std::cout << "Called identify(Base* p)" << std::endl;
	if (!p)
	{
		std::cout << "Error p!!!" << std::endl;
		return ;
	}
	if (A *a = dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
	else if (B *b = dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (C *c = dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void	identify(Base& p)
{
	// std::cout << "Called identify(Base& p)" << std::endl;
	try
	{
		A	a;
		a = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		return ;
	}
	catch(const std::bad_cast& e)
	{
		// Do nothing
	}
	try
	{
		B	b;
		b = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
		return ;
	}
	catch(const std::bad_cast& e)
	{
		// Do nothing
	}
	try
	{
		C	c;
		c = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
		return ;
	}
	catch(const std::bad_cast& e)
	{
		// Do nothing
	}
}

int	main()
{
	Base	*random_base = generate();

	if (random_base == NULL)
		return (0);

	identify(random_base);
	identify(*random_base);

	delete random_base;

	return (0);
}