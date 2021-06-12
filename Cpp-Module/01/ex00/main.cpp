/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 17:44:35 by ysaito            #+#    #+#             */
/*   Updated: 2021/06/12 20:44:08 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
#include <iostream>
#include <string>

void	ponyOnTheHeap(void)
{
	std::cout << "---in ponyOnTheHeap()-------" << std::endl;
	Pony	*heapPony;

	heapPony = new Pony();
	heapPony->setName("HEAP");
	heapPony->callName();
	delete heapPony;
}

void	ponyOnTheStack(void)
{
	std::cout << "---in ponyOnTheStack()------" << std::endl;
	Pony	stackPony;

	stackPony.setName("STACK");
	stackPony.callName();
}

int	main(void)
{
	ponyOnTheHeap();
	ponyOnTheStack();
	return (0);
}