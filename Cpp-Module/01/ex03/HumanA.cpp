/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 20:00:18 by ysaito            #+#    #+#             */
/*   Updated: 2021/06/25 20:08:21 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA()
{
}

HumanA::HumanA(std::string name, Weapon& weapon)
{
	m_name = name;
	m_CWeapon = &weapon;
}

HumanA::~HumanA()
{
}

void	HumanA::attack()
{
	std::cout << m_name << " attacks with his " << m_CWeapon->getType() << std::endl;
}