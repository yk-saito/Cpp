/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 20:08:04 by ysaito            #+#    #+#             */
/*   Updated: 2021/06/05 16:51:14 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <string>

Weapon::Weapon()
{
}

Weapon::Weapon(const std::string& type)
{
	setType(type);
}

Weapon::~Weapon()
{
}

void	Weapon::setType(const std::string& type)
{
	m_type = &type;
}

std::string	Weapon::getType(void)
{
	return (*m_type);
}
