/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 19:28:34 by ysaito            #+#    #+#             */
/*   Updated: 2021/07/10 19:47:20 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
#include <iostream>

const	std::string	Karen::Levels[4] = {
	"DEBUG",
	"INFO",
	"WARNING",
	"ERROR"
};

Karen::Karen()
{
}

Karen::~Karen()
{
}

void	Karen::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl
				<< "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl
				<<	"I just love it!" << std::endl << std::endl;
}

void	Karen::info(void)
{
	std::cout << "[ INFO ]" << std::endl
				<< "I cannot believe adding extra bacon cost more money." << std::endl
				<< "You don’t put enough! If you did I would not have to ask for it!" << std::endl << std::endl;
}

void	Karen::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl
				<< "I think I deserve to have some extra bacon for free." << std::endl
				<< "I’ve been coming here for years and you just started working here last month." << std::endl << std::endl;
}
void	Karen::error(void)
{
	std::cout << "[ ERROR ]" <<  std::endl
				<< "This is unacceptable, I want to speak to the manager now." << std::endl << std::endl;
}

void	Karen::none(void)
{
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}

void	Karen::complain(std::string level)
{
	int	lv;

	for (int index =  0; index < 4; index++)
	{
		if (Levels[index] == level)
		{
			lv = index;
		}
	}

	switch (lv)
	{
		case DEBUG:
			debug();
		case INFO:
			info();
		case WARNING:
			warning();
		case ERROR:
			error();
			break;
		default:
			none();
			break;
	}
}
