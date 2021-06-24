/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 17:40:39 by ysaito            #+#    #+#             */
/*   Updated: 2021/06/24 18:14:50 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*zombies;
	int		N = 5;
	int		count = 0;

	zombies = zombieHorde(N, "Alice");
	while (count < N)
	{
		zombies[count].announce();
		count++;
	}
	delete[] zombies;
	return (0);
}