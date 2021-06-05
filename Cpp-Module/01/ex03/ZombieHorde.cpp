/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 15:25:20 by ysaito            #+#    #+#             */
/*   Updated: 2021/06/05 16:57:42 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde()
{
}

ZombieHorde::ZombieHorde(int N)
{
	m_zombies = new Zombie[N];
	m_zombies_num = N;

}

ZombieHorde::~ZombieHorde()
{
	delete[] m_zombies;
}

int	ZombieHorde::createRandomNum()
{
	int	rand_num;

	rand_num = (0 + rand() % m_zombies_num);  // [MIN] ＋ rand() % [Number you want]
	return (rand_num);
}

void	ZombieHorde::setRandomName()
{
	const char	*rand_name[] = {"Cerberus", "Licker", "Nemesis", "Tyrant", "Valentine", "Wesker"};
	int			count;

	srand((unsigned int)time(NULL));
	count = 0;
	while (count < m_zombies_num)
	{
		m_zombies[count].setName(rand_name[createRandomNum()]);
		// m_zombies[count].zombieName = rand_name[createRandomNum()];
		count++;
	}
}

void	ZombieHorde::announce()
{
	int	count;

	count = 0;
	while (count < m_zombies_num)
	{
		m_zombies[count].announce();
		count++;
	}
}