/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 10:55:29 by ysaito            #+#    #+#             */
/*   Updated: 2021/06/15 16:59:31 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include <iostream>
#include <stdlib.h>
#include <time.h>

ZombieEvent::ZombieEvent()
{
}

ZombieEvent::~ZombieEvent()
{
}

int	ZombieEvent::createRandomNum()
{
	int	rand_num;

	rand_num = (0 + rand() % STORE_ZOMBIE_NUM);  // [MIN] ＋ rand() % [Number you want]
	return (rand_num);
}

/*
** Store zombie type in object
*/
void	ZombieEvent::setZombieType(std::string type)
{
	m_type = type;
}

Zombie*	ZombieEvent::newZombie(std::string name)
{
	Zombie	*new_zombie;

	new_zombie = new Zombie(name, m_type);
	return (new_zombie);
}

/*
**  Create a Zombie with a random name
*/
Zombie*	ZombieEvent::randomChump()
{
	Zombie		*rand_zombie;
	ZombieEvent	event;
	const char	*rand_name[] = {"Cerberus", "Licker", "Nemesis", "Tyrant", "Valentine", "Wesker"};

	event.setZombieType("RANDOM_type");
	rand_zombie = event.newZombie(rand_name[createRandomNum()]);
	rand_zombie->announce();
	return (rand_zombie);
}