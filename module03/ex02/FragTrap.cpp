/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 18:57:37 by ysaito            #+#    #+#             */
/*   Updated: 2021/08/23 16:58:28 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	hitpoints_ = 100;
	energy_points_ = 100;
	attack_damage_ = 30;
	max_hitpoints_ = hitpoints_;
	std::cout << "FragTrap [ " << name_ << " ] Constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap [ " << name_ << " ] Destructor called" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap 'High five 2 times'" << std::endl;
}