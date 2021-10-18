/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 14:00:38 by ysaito            #+#    #+#             */
/*   Updated: 2021/07/10 20:33:37 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie  stack_zombie("STACK");
    Zombie	*new_zombie = newZombie("HEAP");

    stack_zombie.announce();
	new_zombie->announce();
	randomChump("RANDOM");
	
    delete new_zombie;

	return (0);
}
