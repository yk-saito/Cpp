/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 15:43:24 by ysaito            #+#    #+#             */
/*   Updated: 2021/09/11 14:50:08 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

#include <iostream>

Cat::Cat() : Animal("Cat"), brain_(new Brain())
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
	{
		this->type_ = other.getType();
		this->brain_ = new Brain();
		for (int i = 0; other.getBrainIdea(i) != ""; i++)
		{
			this->setBrainIdea(other.getBrainIdea(i));
		}
	}
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Called Cat Destructor" << std::endl;
	delete brain_;
}

void	Cat::makeSound() const
{
	std::cout << "Meow!" << std::endl;
}

void	Cat::setBrainIdea(const std::string idea)
{
	brain_->setIdea(idea);
}

std::string	Cat::getBrainIdea(int index) const
{
	return (brain_->getIdea(index));
}