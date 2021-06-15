/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 15:25:20 by ysaito            #+#    #+#             */
/*   Updated: 2021/06/15 17:57:06 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include <iostream>

ZombieHorde::ZombieHorde()
{
}

ZombieHorde::ZombieHorde(int N)
{
	try
	{
		m_zombies = new Zombie[N];
	}
	catch(const std::bad_alloc& ba)
	{
		std::cerr << "Caught Error " <<  ba.what() << '\n';
		return ;
	}
	m_zombies_num = N;
	setRandomName();
}

ZombieHorde::~ZombieHorde()
{
	delete[] m_zombies;
}

int	ZombieHorde::createRandomNum()
{
	int	rand_num;

	rand_num = (0 + rand() % STORE_ZOMBIE_NUM);  // [MIN] ＋ rand() % [Number you want]
	return (rand_num);
}

void	ZombieHorde::setRandomName()
{
	const char	*rand_name[STORE_ZOMBIE_NUM] = {"Cerberus", "Licker", "Nemesis", "Tyrant", "Valentine", "Wesker"};
	int			count;

	srand((unsigned int)time(NULL));
	count = 0;
	while (count < m_zombies_num)
	{
		m_zombies[count].setName(rand_name[createRandomNum()]);
		count++;
	}
}

void	ZombieHorde::announce()
{
	int	count;

	count = 0;
	while (count < m_zombies_num)
	{
		std::cout << count << ".";
		m_zombies[count].announce();
		count++;
	}
}