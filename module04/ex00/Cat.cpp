/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 15:43:24 by ysaito            #+#    #+#             */
/*   Updated: 2021/09/10 19:54:41 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

#include <iostream>

Cat::Cat() : Animal("Cat")
{
	std::cout << "Called Cat Default Constructor" << std::endl;
}

Cat::Cat(const Cat &other)
{
	std::cout << "Called Cat Copy Constructor" << std::endl;
	*this = other;
}

Cat &Cat::operator=(const Cat &other)
{
	if (this != &other)
		this->type_ = other.getType();
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Called Cat Destructor" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Meow!" << std::endl;
}
