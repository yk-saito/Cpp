/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 13:30:03 by ysaito            #+#    #+#             */
/*   Updated: 2021/06/21 11:14:11 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include <iostream>

Phonebook::Phonebook()
{
}

Phonebook::~Phonebook()
{
}

void	Phonebook::setCount()
{
	m_count++;
}

int	Phonebook::getCount()
{
	return (m_count);
}

void	Phonebook::clearCommand(void)
{
	std::cin.clear();
	std::cin.ignore(1024, '\n');
}

void	Phonebook::commandAdd(Contact *contact)
{
	if (m_count > 7)
		std::cout << "Contact is full." << std::endl;
	else
	{
		contact[m_count].setContact(&contact[m_count]);
		setCount();
	}
}

void	Phonebook::commandSearch(Contact *contact)
{
	int	input_idx;
	int	i;

	i = 0;
	if (m_count)
	{
		while (i < m_count)
		{
			contact[i].displayList(contact[i], i);
			i++;
		}
	}
	while (1)
	{
		std::cout << "Please enter index.(0-7)" << std::endl << ">> ";
		std::cin >> input_idx;
		if (std::cin.fail())
		{
			std::cout << "Error index. ";
			Phonebook::clearCommand();
			continue ;
		}
		else if (input_idx < 0 || input_idx > 7)
		{
			std::cout << "Error index. ";
			Phonebook::clearCommand();
			continue ;
		}
		else
		{
			Phonebook::clearCommand();
			break ;
		}
	}
	if (contact[input_idx].getEnteredFlag() == false)
		std::cout << "[" << input_idx << "] is empty." << std::endl;
	else
		contact[input_idx].displayContact(contact[input_idx]);
}

void	Phonebook::commandError()
{
	std::cout << "Command error." << std::endl;
}