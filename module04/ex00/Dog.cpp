/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 15:21:29 by ysaito            #+#    #+#             */
/*   Updated: 2021/09/10 19:54:49 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

#include <iostream>

Dog::Dog() : Animal("Dog")
{
	std::cout << "Called Dog Default Constructor" << std::endl;
}

Dog::Dog(const Dog &other)
{
	std::cout << "Called Dog Copy Constructor" << std::endl;
	*this = other;
}

Dog	&Dog::operator=(const Dog &other)
{
	if (this != &other)
		this->type_ = other.getType();
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Called Dog Destructor" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "Bow wow!" << std::endl;
}
