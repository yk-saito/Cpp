/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 17:09:54 by ysaito            #+#    #+#             */
/*   Updated: 2021/08/25 20:45:21 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) :
	name_(name),
	hitpoints_(10),
	energy_points_(10),
	attack_damage_(),
	max_hitpoints_(hitpoints_)
{
	std::cout << "ClapTrap [ " << name_ << " ] Constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap [ " << name_ << " ] Destructor called" << std::endl;
}

void	ClapTrap::attack(std::string const & target)
{
	if (hitpoints_ < energy_points_)
	{
		std::cout << "ClapTrap [ " << name_ << " ] HP is "
				  << (energy_points_ - hitpoints_) << " points short... "
				  << "[ " << name_ << " ] can't attack!!!" << std::endl;
		return ;
	}
	else
		hitpoints_ -= energy_points_;
	std::cout << "ClapTrap [ " << name_ << " ] "
			  << "attacks < " << target << " >, "
			  << "causing " << attack_damage_ << " points of damage!"
			  << "	-> [ " << name_ << " ] HP " << hitpoints_ << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (hitpoints_ < amount)
		hitpoints_ = 0;
	else
		hitpoints_ -= amount;
	std::cout << "ClapTrap [ " << name_ << " ] "
			  << "takes " << amount << " points of damage!"
			  << "	-> [ " << name_ << " ] HP " << hitpoints_ << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if ((amount >= max_hitpoints_) || ((hitpoints_ + amount) >= max_hitpoints_))
		hitpoints_ = max_hitpoints_;
	else
			hitpoints_ += amount;
	std::cout << "ClapTrap [ " << name_ << " ] "
			  << "be repaired " << amount << " points!"
			  << "	-> [ " << name_ << " ] HP " << hitpoints_ << std::endl;
}
