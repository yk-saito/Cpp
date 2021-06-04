/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 20:30:18 by ysaito            #+#    #+#             */
/*   Updated: 2021/06/04 22:30:50 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(void)
{
}

HumanB::HumanB(std::string name)
{
	m_name = name;
}

HumanB::~HumanB(void)
{
}

// void	HumanB::setWeapon(Weapon weapon)
// {

// }

void	HumanB::attack()
{
	std::cout << m_name << " attacks with his " << Weapon::getType() << std::endl;
}