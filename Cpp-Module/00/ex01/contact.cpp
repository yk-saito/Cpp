/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 16:00:45 by ysaito            #+#    #+#             */
/*   Updated: 2021/05/31 23:20:36 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact(/* args */) : m_entered_flag(0)
{
	// static int	index = 0;

	// std::cout << "make contact obj[" << index << "]" << std::endl;//del
	// index++;
}

Contact::~Contact()
{
	// static int	index = 0;

	// std::cout << "delete contact obj[" << index << "]" << std::endl;//dde;
	// index++;
}

void	Contact::setEnteredFlag()
{
	m_entered_flag = 1;
}

int	Contact::getEnteredFlag()
{
	return (m_entered_flag);
}

void	Contact::setFirstName(std::string input_first_name)
{
	m_first_name = input_first_name;
}

std::string	Contact::getFirstName()
{
	return (m_first_name);
}

void	Contact::setLastName(std::string input_last_name)
{
	m_last_name = input_last_name;
}

std::string	Contact::getLastName()
{
	return (m_last_name);
}

void	Contact::setNickname(std::string input_nickname)
{
	m_nickname = input_nickname;
}

std::string	Contact::getNickname()
{
	return (m_nickname);
}

void	Contact::setLogin(std::string input_login)
{
	m_login = input_login;
}

std::string	Contact::getLogin()
{
	return (m_login);
}

void	Contact::setPostalAddr(std::string input_postal_addr)
{
	m_postal_addr = input_postal_addr;
}

std::string	Contact::getPostalAddr()
{
	return (m_postal_addr);
}

void	Contact::setEmailAddr(std::string input_email_addr)
{
	m_email_addr = input_email_addr;
}

std::string	Contact::getEmailAddr()
{
	return (m_email_addr);
}

void	Contact::setPhoneNumber(std::string input_phone_number)
{
	m_phone_number = input_phone_number;
}

std::string	Contact::getPhoneNumber()
{
	return (m_phone_number);
}
