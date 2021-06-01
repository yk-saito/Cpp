/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 17:44:35 by ysaito            #+#    #+#             */
/*   Updated: 2021/06/01 21:42:48 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
#include <iostream>
#include <string>

void	ponyOnTheHeap(Pony *heapPony)
{
	//Pony		*heapPony;
	std::string	name;
	std::string	action;

	// heapPony = new Pony();
	std::cout << "Please enter the name of the heapPony." << std::endl;
	std::cout << "name : ";
	std::cin >> name;
	heapPony->setName(name);

	std::cout << "---in ponyOnTheHeap()-------" << std::endl;
	std::cout << "[heap Pony]";
	std::cout << "name=" << heapPony->getName() << std::endl << std::endl;
	//return (heapPony);
}

void	ponyOnTheStack(Pony *stackPony)
{
	//Pony		stackPony;
	std::string	name;
	std::string	action;

	// pPony = new Pony();
	std::cout << "Please enter the name of the stackPony." << std::endl;
	std::cout << "name : ";
	std::cin >> name;
	stackPony->setName(name);

	std::cout << "---in ponyOnTheStack()------" << std::endl;
	std::cout << "[stack Pony]";
	std::cout << "name=" << stackPony->getName() << std::endl << std::endl;
//	return (stackPony);
}

int	main(void)
{
	Pony	*heapPony;
	Pony	stackPony;

	heapPony = new Pony();
	std::cout << "---START-------------------" << std::endl;
	std::cout << "[heap Pony]";
	std::cout << "name=" << heapPony->getName() << std::endl;
	std::cout << "[stack Pony]";
	std::cout << "name=" << stackPony.getName() << std::endl;
	ponyOnTheHeap(heapPony);
	ponyOnTheStack(&stackPony);
	// std::cout << "---END---------------------" << std::endl;
	// std::cout << "[heap Pony]";
	// std::cout << "name=" << heapPony->getName() << std::endl;
	// std::cout << "[stack Pony]";
	// std::cout << "name=" << stackPony.getName() << std::endl;
	delete heapPony;
	return (0);
}