/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 17:41:25 by ysaito            #+#    #+#             */
/*   Updated: 2021/06/12 20:23:14 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
#include  <iostream>
#include <string>

Pony::Pony() : m_name("None")
{
	std::cout << "make Pony !" << std::endl;
}

Pony::~Pony()
{
	std::cout << "delete Pony ..." << std::endl;
}

void	Pony::setName(std::string name)
{
	m_name = name;
}

std::string	Pony::getName()
{
	return (m_name);
}

void	Pony::callName()
{
	std::cout << "Come on [" << getName() << "] !!!" <<  std::endl;
}