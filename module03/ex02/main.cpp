/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 18:57:57 by ysaito            #+#    #+#             */
/*   Updated: 2021/08/23 17:05:41 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap	c_player("Alice");

	c_player.attack("Target1");
	for (int j = 0; j < 3; j++)
		c_player.beRepaired(4);
	c_player.takeDamage(5);
	std::cout << std::endl;

	ScavTrap	s_player("Bob");

	s_player.attack("Target2");
	for (int j = 0; j < 3; j++)
		s_player.beRepaired(20);
	s_player.takeDamage(20);
	s_player.guardGate();
	std::cout << std::endl;

	FragTrap	f_player("Carol");

	f_player.attack("Target3");
	for (int j = 0; j < 3; j++)
		f_player.beRepaired(35);
	f_player.takeDamage(35);
	f_player.highFivesGuys();

	return 0;
}
