/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 16:22:53 by ysaito            #+#    #+#             */
/*   Updated: 2021/06/03 23:16:26 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int	main(void)
{
	Zombie		stack_zombie("STACK", "S_type");
	Zombie		*heap_zombie;
	Zombie		*heap_zombie2;
	ZombieEvent	event;

	stack_zombie.announce();
	event.setZombieType("H_type");
	heap_zombie = event.newZombie("HEAP");
	heap_zombie->announce();

	srand((unsigned int)time(NULL));
	heap_zombie2 = event.randomChump();
	delete heap_zombie;
	delete heap_zombie2;

	//while  (1);
	return (0);
}