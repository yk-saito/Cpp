/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 17:39:52 by ysaito            #+#    #+#             */
/*   Updated: 2021/06/24 18:15:02 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie* zombieHorde(int N, std::string name)
{
	Zombie	*zombies;
	int	count = 0;

	try
	{
		zombies = new Zombie[5];
	}
	catch(const std::bad_alloc& ba)
	{
		std::cerr << "Caught Error " << ba.what() << std::endl;
		return (NULL);
	}
	while (count < N)
	{
		zombies[count].setName(name);
		count++;
	}
	return (zombies);
}