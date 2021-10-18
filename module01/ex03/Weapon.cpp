/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 08:52:30 by ysaito            #+#    #+#             */
/*   Updated: 2021/07/10 19:58:07 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <string>

Weapon::Weapon()
{
}

Weapon::Weapon(std::string type) : m_type(type)
{
}

Weapon::~Weapon()
{
}

void	Weapon::setType(std::string type)
{
	m_type = type;
}

const std::string&	Weapon::getType(void)
{
	return (m_type);
}