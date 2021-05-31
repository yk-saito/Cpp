/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 15:15:55 by ysaito            #+#    #+#             */
/*   Updated: 2021/05/31 23:21:07 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include <iomanip>
#include <iostream>
#include <string>

void	set_contact(Contact *contact, int count)
{
	std::string	input_info;

	contact[count].setEnteredFlag();
	std::cout << "first name : ";
	std::cin >> input_info;
	contact[count].setFirstName(input_info);
	std::cout << "last name : ";
	std::cin >> input_info;
	contact[count].setLastName(input_info);
	std::cout << "nickname : ";
	std::cin >> input_info;
	contact[count].setNickname(input_info);
	std::cout << "login : ";
	std::cin >> input_info;
	contact[count].setLogin(input_info);
	std::cout << "postal address : ";
	std::cin >> input_info;
	contact[count].setPostalAddr(input_info);
	std::cout << "email address : ";
	std::cin >> input_info;
	contact[count].setEmailAddr(input_info);
	std::cout << "phone number : ";
	std::cin >> input_info;
	contact[count].setPhoneNumber(input_info);
	std::cin.clear();
}

std::string	format(std::string str)
{
	if (str.length() >= 10)
	{
		str.resize(9);
		unsigned resize_len = str.size();
		str.resize(resize_len + 1, '.');
		//str.resize(10, '.');
	}
	return (str);
}

int	main(void)
{
	Contact		contact[8];
	std::string	command;
	int			input_idx;
	int			count;

	count = 0;
	while (1)
	{
		std::cout << std::endl << "Waiting for command input" << std::endl;
		std::cout << "(ADD / SEARCH / EXIT)" << std::endl << ">> ";
		std::cin >> command;
		if (command.compare("ADD") == 0)
		{
			//std::cout << "input ADD command" << std::endl;//del
			if (count > 7)
			{
				std::cout << "Contact is full." << std::endl;
			}
			else
			{
				set_contact(contact, count);
				count++;
			}
		}
		else if (command.compare("SEARCH") == 0)
		{
			//std::cout << "input SEARCH command" << std::endl;//del
			int	i = 0;
			if (count)
			{
				while (i < count)
				{
						std::cout << std::setw(10) << i << "|";
						std::cout << std::setw(10) << format(contact[i].getFirstName()) << "|";
						std::cout << std::setw(10) << format(contact[i].getLastName()) << "|";
						std::cout << std::setw(10) << format(contact[i].getNickname()) << "|" << std::endl;
					i++;
				}
			}
			std::cout << "Please enter the contact index" << std::endl << ">> ";
			// std::cin >> input_idx;
			// while (true)
			// {
				try
				{
					std::cin >> input_idx;
				}
				//catch(const std::exception& e)
				catch(char *pstr)
				{
					//std::cerr << e.what() << '\n';
					std::cin.clear();//例外を消去
					//std::cin.seekg(0);
					continue ;
				}
				// break ;
			// }
			if (input_idx > 7)
			{
				std::cout << "[" << input_idx << "] does not exist." << std::endl;
			}
			else if (!(contact[input_idx].getEnteredFlag()))
			{
				std::cout << "[" << input_idx << "] is empty." << std::endl;
			}
			else
			{
				std::cout << "[first name]" << contact[input_idx].getFirstName();
				std::cout << "[last name]" << contact[input_idx].getLastName();
				std::cout << "[nickname]" << contact[input_idx].getNickname();
				std::cout << "[login]" << contact[input_idx].getLogin();
				std::cout << "[postal address]" << contact[input_idx].getPostalAddr();
				std::cout << "[email address]" << contact[input_idx].getEmailAddr();
				std::cout << "[phone number]" << contact[input_idx].getPhoneNumber() << std::endl;;
			}
		}
		else if (command.compare("EXIT") == 0)
		{
			//std::cout << "input EXIT command" << std::endl;
			return (0);
		}
		else
		{
			std::cout << "Please input the [ADD / SEARCH / EXIT] command." << std::endl;
		}
		std::cin.clear();//これしないとバッファオーバーフロー起きるよ
	}
	return (0);
}