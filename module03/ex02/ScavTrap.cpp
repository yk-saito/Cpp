/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 17:11:09 by ysaito            #+#    #+#             */
/*   Updated: 2021/08/23 16:17:32 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	hitpoints_ = 100;
	energy_points_ = 50;
	attack_damage_ = 20;
	max_hitpoints_ = hitpoints_;
	std::cout << "ScavTrap [ " << name_ << " ] Constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap [ " << name_ << " ] Destructor called" << std::endl;
}

void	ScavTrap::attack(std::string const & target)
{
	if (hitpoints_ < energy_points_)
	{
		std::cout << "ScavTrap [ " << name_ << " ] HP 0 !!!"
				  << "[ " << name_ << " ] can't attack...!" << std::endl;
		return ;
	}
	else
		hitpoints_ -= energy_points_;
	std::cout << "ScavTrap [ " << name_ << " ] "
			  << "attacks < " << target << " >, "
			  << "causing " << attack_damage_ << " points of damage!"
			  << "	-> [ " << name_ << " ] HP " << hitpoints_ << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap '----- Gate keeper mode -----'" << std::endl;
}