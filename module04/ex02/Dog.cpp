/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 15:21:29 by ysaito            #+#    #+#             */
/*   Updated: 2021/09/11 14:48:58 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

#include <iostream>

Dog::Dog() : Animal("Dog") , brain_(new Brain())
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

Dog::~Dog()
{
	std::cout << "Called Dog Destructor" << std::endl;
	delete brain_;
}

void	Dog::makeSound() const
{
	std::cout << "Bow wow!" << std::endl;
}

void	Dog::setBrainIdea(const std::string idea)
{
	brain_->setIdea(idea);
}

std::string	Dog::getBrainIdea(int index) const
{
	return (brain_->getIdea(index));
}