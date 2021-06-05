/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 15:24:54 by ysaito            #+#    #+#             */
/*   Updated: 2021/06/05 16:58:06 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"
#include <iostream>

int	main(void)
{
	ZombieHorde	*zombies;
	int			num_zombie;

	std::cout << "Please enter the number of Zombies. >> ";
	std::cin >> num_zombie;
	zombies = new ZombieHorde(num_zombie);
	zombies->announce();
	return (0);
}