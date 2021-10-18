/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 17:40:39 by ysaito            #+#    #+#             */
/*   Updated: 2021/07/09 20:25:02 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int	main(void)
{
	Zombie	*zombies;
	int		N = 5;

	zombies = zombieHorde(N, "Alice");
	for (int count =  0; count < N; count++)
	{
		zombies[count].announce();
	}
	delete[] zombies;
	return (0);
}