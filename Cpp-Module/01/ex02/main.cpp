/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 16:22:53 by ysaito            #+#    #+#             */
/*   Updated: 2021/06/15 16:59:25 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int	main(void)
{
	Zombie		stack_zombie("Stack", "STACK_type");
	Zombie		*heap_zombie;
	Zombie		*rand_zombie[CREATE_ZOMBIE_NUM];
	ZombieEvent	event;
	int			count;

	stack_zombie.announce();
	event.setZombieType("HEAP_type");
	heap_zombie = event.newZombie("Heap");
	heap_zombie->announce();
	delete heap_zombie;
	srand((unsigned int)time(NULL));
	count = 0;
	while (count < CREATE_ZOMBIE_NUM)
	{
		rand_zombie[count] = event.randomChump();
		count++;
	}
	count = 0;
	while (count < CREATE_ZOMBIE_NUM)
	{
		delete rand_zombie[count];
		count++;
	}
	//while  (1);
	return (0);
}