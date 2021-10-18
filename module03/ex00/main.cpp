/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 17:10:14 by ysaito            #+#    #+#             */
/*   Updated: 2021/08/26 11:02:50 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	player("Alice");

	player.attack("Target1");
	for (int j = 0; j < 3; j++)
		player.beRepaired(4);
	player.takeDamage(5);
	player.attack("Target2");
	return 0;
}
