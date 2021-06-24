/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 16:00:45 by ysaito            #+#    #+#             */
/*   Updated: 2021/06/21 14:46:29 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include <iomanip>
#include <iostream>

Contact::Contact() : m_entered_flag(false)
{
}

Contact::~Contact()
{
}

void	Contact::clearInput(void)
{
	std::cin.clear();
	std::cin.ignore(1024, '\n');
}

void	Contact::setEnteredFlag()
{
	m_entered_flag = true;
}

bool	Contact::getEnteredFlag()
{
	return (m_entered_flag);
}

void	Contact::setFirstName(std::string first_name)
{
	m_first_name = first_name;
}

std::string	Contact::getFirstName()
{
	return (m_first_name);
}

void	Contact::setLastName(std::string last_name)
{
	m_last_name = last_name;
}

std::string	Contact::getLastName()
{
	return (m_last_name);
}

void	Contact::setNickname(std::string nickname)
{
	m_nickname = nickname;
}

std::string	Contact::getNickname()
{
	return (m_nickname);
}

void	Contact::setLogin(std::string login)
{
	m_login = login;
}

std::string	Contact::getLogin()
{
	return (m_login);
}

void	Contact::setPostalAddr(std::string postal_addr)
{
	m_postal_addr = postal_addr;
}

std::string	Contact::getPostalAddr()
{
	return (m_postal_addr);
}

void	Contact::setEmailAddr(std::string email_addr)
{
	m_email_addr = email_addr;
}

std::string	Contact::getEmailAddr()
{
	return (m_email_addr);
}

void	Contact::setPhoneNumber(std::string phone_number)
{
	m_phone_number = phone_number;
}

std::string	Contact::getPhoneNumber()
{
	return (m_phone_number);
}

void	Contact::setBirthday(std::string birthday)
{
	m_birthday_date = birthday;
}

std::string	Contact::getBirthday()
{
	return (m_birthday_date);
}

void	Contact::setFavoriteMeal(std::string favorite_meal)
{
	m_favorite_meal = favorite_meal;
}

std::string	Contact::getFavoriteMeal()
{
	return (m_favorite_meal);
}

void	Contact::setUnderwearColor(std::string underwear_color)
{
	m_underwear_color = underwear_color;
}

std::string	Contact::getUnderwearColor()
{
	return (m_underwear_color);
}

void	Contact::setSecret(std::string secret)
{
	m_darkest_secret = secret;
}

std::string	Contact::getSecret()
{
	return (m_darkest_secret);
}

void	Contact::setContact(Contact *contact)
{
	std::string	input_info;

	contact->setEnteredFlag();
	std::cout << "first name : ";
	std::cin >> input_info;
	contact->setFirstName(input_info);
	Contact::clearInput();
	std::cout << "last name : ";
	std::cin >> input_info;
	contact->setLastName(input_info);
	Contact::clearInput();
	std::cout << "nickname : ";
	std::cin >> input_info;
	contact->setNickname(input_info);
	Contact::clearInput();
	std::cout << "login : ";
	std::cin >> input_info;
	contact->setLogin(input_info);
	Contact::clearInput();
	std::cout << "postal address : ";
	std::cin >> input_info;
	contact->setPostalAddr(input_info);
	Contact::clearInput();
	std::cout << "email address : ";
	std::cin >> input_info;
	contact->setEmailAddr(input_info);
	Contact::clearInput();
	std::cout << "phone number : ";
	std::cin >> input_info;
	contact->setPhoneNumber(input_info);
	Contact::clearInput();
	std::cout << "birthday date : ";
	std::cin >> input_info;
	contact->setBirthday(input_info);
	Contact::clearInput();
	std::cout << "favorite meal : ";
	std::cin >> input_info;
	contact->setFavoriteMeal(input_info);
	Contact::clearInput();
	std::cout << "underwear color : ";
	std::cin >> input_info;
	contact->setUnderwearColor(input_info);
	Contact::clearInput();
	std::cout << "darkest secret : ";
	std::cin >> input_info;
	contact->setSecret(input_info);
	Contact::clearInput();
}

std::string	format(std::string str)
{
	if (str.length() >= 10)
	{
		str.resize(9);
		unsigned resize_len = str.size();
		str.resize(resize_len + 1, '.');
	}
	return (str);
}

void	Contact::displayList(Contact contact, int index)
{
	std::cout << std::setw(10) << index << "|";
	std::cout << std::setw(10) << format(contact.getFirstName()) << "|";
	std::cout << std::setw(10) << format(contact.getLastName()) << "|";
	std::cout << std::setw(10) << format(contact.getNickname()) << "|" << std::endl;
}

void	Contact::displayContact(Contact contact)
{
	std::cout << "[first name]-->" << contact.getFirstName() << std::endl;
	std::cout << "[last name]-->" << contact.getLastName() << std::endl;
	std::cout << "[nickname]-->" << contact.getNickname() << std::endl;
	std::cout << "[login]-->" << contact.getLogin() << std::endl ;
	std::cout << "[postal address]-->" << contact.getPostalAddr() << std::endl;
	std::cout << "[email address]-->" << contact.getEmailAddr() << std::endl;
	std::cout << "[phone number]-->" << contact.getPhoneNumber() << std::endl;
	std::cout << "[birthday date]-->" << contact.getBirthday() << std::endl;
	std::cout << "[favorite meal]-->" << contact.getFavoriteMeal() << std::endl;
	std::cout << "[underwear color]-->" << contact.getUnderwearColor() << std::endl;
	std::cout << "[darkest secret]-->" << contact.getSecret() << std::endl << std::endl;
}
