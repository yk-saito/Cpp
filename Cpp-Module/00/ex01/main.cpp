/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 15:15:55 by ysaito            #+#    #+#             */
/*   Updated: 2021/06/01 15:57:56 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include <iomanip>
#include <iostream>
#include <string>

int	main(void)
{
	Contact		contact[8];
	std::string	command;
	int			input_idx;
	int			count;
	int			i;

	count = 0;
	while (1)
	{
		std::cout << std::endl << "Waiting for command..." << std::endl;
		std::cout << "(ADD / SEARCH / EXIT)" << std::endl << ">> ";
		std::cin >> command;
		if (command.compare("ADD") == 0)
		{
			if (count > 7)
				std::cout << "Contact is full." << std::endl;
			else
			{
				contact[count].setContact(&contact[count]);
				count++;
			}
		}
		else if (command.compare("SEARCH") == 0)
		{
			i = 0;
			if (count)
			{
				while (i < count)
				{
						// std::cout << std::setw(10) << i << "|";
						// std::cout << std::setw(10) << format(contact[i].getFirstName()) << "|";
						// std::cout << std::setw(10) << format(contact[i].getLastName()) << "|";
						// std::cout << std::setw(10) << format(contact[i].getNickname()) << "|" << std::endl;
					contact[i].displayList(contact[i]);
					i++;
				}
			}
			while (1)
			{
				std::cout << "Please enter from 0 to 7." << std::endl << ">> ";
				std::cin >> input_idx;
				if (!std::cin.fail())
				{
					break ;
				}
				std::cin.clear();
				std::cin.ignore(1024, '\n');
			}
			if (input_idx < 0 || input_idx > 7)
			{
				std::cout << "[" << input_idx << "] does not exist." << std::endl;
			}
			else if (!(contact[input_idx].getEnteredFlag()))
			{
				std::cout << "[" << input_idx << "] is empty." << std::endl;
			}
			else
			{
				contact[input_idx].displayContact(contact[input_idx]);
			}
		}
		else if (command.compare("EXIT") == 0)
		{
			return (0);
		}
		else
		{
			std::cout << "Command error." << std::endl;
		}
	}
	return (0);
}