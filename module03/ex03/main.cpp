/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 17:49:28 by ysaito            #+#    #+#             */
/*   Updated: 2021/08/23 17:20:55 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap d_player("Alice");

	d_player.attack("Target");
	for (int j = 0; j < 3; j++)
		d_player.beRepaired(20);
	d_player.takeDamage(20);
	d_player.whoAmI();

	return 0;
}
