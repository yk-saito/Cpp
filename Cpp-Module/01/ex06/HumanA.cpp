/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 20:19:03 by ysaito            #+#    #+#             */
/*   Updated: 2021/06/04 22:30:21 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(void)
{
}

HumanA::HumanA(std::string name, Weapon& weapon)
{
	m_name = name;
	m_pWeapon = weapon;
}

HumanA::~HumanA(void)
{
}

void	HumanA::attack()
{
	std::cout << m_name << " attacks with his " << m_pWeapon.getType() << std::endl;
}