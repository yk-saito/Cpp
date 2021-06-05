/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 17:33:28 by ysaito            #+#    #+#             */
/*   Updated: 2021/06/05 16:50:48 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human()
{
}
Human::~Human()
{
}


Brain	*Human::identify(void)
{
	return (Brain::identify());
}

Brain	Human::getBrain(void)
{
	Brain	brain;

	return (brain);
}