/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 20:10:29 by ysaito            #+#    #+#             */
/*   Updated: 2021/07/09 19:47:44 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>
#include <string>

HumanB::HumanB()
{
}

HumanB::HumanB(std::string name) : m_name(name)
{
}

HumanB::~HumanB()
{
}

void	HumanB::setWeapon(Weapon& weapon)
{
	m_CWeapon = &weapon;
}

void	HumanB::attack()
{
	std::cout << m_name << " attacks with his " << m_CWeapon->getType() << std::endl;
}