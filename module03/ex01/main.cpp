/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 17:10:46 by ysaito            #+#    #+#             */
/*   Updated: 2021/08/23 16:11:10 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap	c_player("Alice");

	c_player.attack("Target1");
	for (int j = 0; j < 3; j++)
		c_player.beRepaired(4);
	c_player.takeDamage(5);

	ScavTrap	s_player("Bob");

	s_player.attack("Target2");
	for (int j = 0; j < 3; j++)
		s_player.beRepaired(20);
	s_player.takeDamage(20);
	s_player.guardGate();
	return 0;
}