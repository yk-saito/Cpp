/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 18:20:01 by ysaito            #+#    #+#             */
/*   Updated: 2021/06/03 18:23:25 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <iostream>

Zombie::Zombie() : m_name("None"), m_type("None")
{
}

Zombie::Zombie(std::string name)
{
	m_name = name;
}

Zombie::~Zombie()
{
}

/*
** ゾンビの名前とタイプを出力
*/
void	Zombie::announce()
{
	std::cout << "< "  << m_name << " (" << m_type << ") >　" << "Braiiiiiiinnnssss..." << std::endl;