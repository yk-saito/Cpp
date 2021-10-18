/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 17:48:26 by ysaito            #+#    #+#             */
/*   Updated: 2021/08/23 17:40:28 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) :
	ClapTrap(name),
	FragTrap(name),
	ScavTrap(name)
{
	claptrap_name_ = name + "_clap_name";
	hitpoints_ = 100;
	energy_points_ = 50;
	attack_damage_ = 30;
	max_hitpoints_ = hitpoints_;
	std::cout << "DiamondTrap [ " << name_ << " ] Constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap [ " << name_ << " ] Destructor called" << std::endl;
}

void	DiamondTrap::attack(std::string const & target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "My name is '" << name_
			  << "' and My claptrap_name is '" << claptrap_name_
			  << "'." << std::endl;
}