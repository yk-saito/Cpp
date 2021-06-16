/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 20:08:04 by ysaito            #+#    #+#             */
/*   Updated: 2021/06/16 14:54:29 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <string>
#include <iostream>//de;
Weapon::Weapon()
{
}

Weapon::Weapon(std::string type)
{
	setType(type);
}

Weapon::~Weapon()
{
}

void	Weapon::setType(std::string type)
{
	m_type = type;
	std::cout << "[test]" << getType() << std::endl;//del
}

const std::string&	Weapon::getType(void)
{
	return (m_type);
}
