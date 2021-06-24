/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 10:40:15 by ysaito            #+#    #+#             */
/*   Updated: 2021/06/24 14:09:03 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie()
{
}

Zombie::Zombie(std::string name)
{
	m_name = name;
}

Zombie::~Zombie()
{
	std::cout << "See you Zombie [" << m_name << "] !" << std::endl;
}

void	Zombie::announce()
{
	std::cout << "< "  << m_name << " >" << " BraiiiiiiinnnzzzZ..." << std::endl;
	// std::cout << "< "  << zombieName << " (" << m_type << ") >　" << " BraiiiiiiinnnzzzZ..." << std::endl;
}
