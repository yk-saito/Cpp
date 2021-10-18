/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 15:15:55 by ysaito            #+#    #+#             */
/*   Updated: 2021/06/19 19:56:12 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include "phonebook.hpp"
#include <iostream>
#include <string>

int	main(void)
{
	Contact		contact[8];
	Phonebook	phone;
	std::string	command;

	while (1)
	{
		std::cout << std::endl << "Waiting for command..." << std::endl
				<< "(ADD / SEARCH / EXIT)" << std::endl << ">> ";
		std::cin >> command;
		if (command == "ADD")
		{
			phone.clearCommand();
			phone.commandAdd(contact);
		}
		else if (command == "SEARCH")
		{
			phone.clearCommand();
			phone.commandSearch(contact);
		}
		else if (command == "EXIT")
			return (0);
		else
		{
			phone.clearCommand();
			phone.commandError();
		}
	}
	return (0);
}