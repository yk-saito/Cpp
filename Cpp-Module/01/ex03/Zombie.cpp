/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 10:40:15 by ysaito            #+#    #+#             */
/*   Updated: 2021/06/05 16:36:19 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <iostream>

Zombie::Zombie()
{
	m_type = "R_type";
}

Zombie::Zombie(std::string name, std::string type)
{
	m_name = name;
	m_type = type;
}

Zombie::~Zombie()
{
}

void	Zombie::setName(const char *name)
{
	m_name = std::string(name);
}

/*
** Output zombie name and zombie type"
*/
void	Zombie::announce()
{
	std::cout << "< "  << m_name << " (" << m_type << ") >　" << "Braiiiiiiinnnssss..." << std::endl;
	// std::cout << "< "  << zombieName << " (" << m_type << ") >　" << "Braiiiiiiinnnssss..." << std::endl;
}