/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 16:18:17 by ysaito            #+#    #+#             */
/*   Updated: 2021/09/11 18:17:26 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

#include <iostream>
#include <string>

WrongAnimal::WrongAnimal()
{
	std::cout << "Called WrongAnimal Default Constructor" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string type) : type_(type)
{
	std::cout << "Called WrongAnimal Constructor with arguments" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	std::cout << "Called WrongAnimal Copy Constructor" << std::endl;
	*this = other;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
	if (this != &other)
		this->type_ = other.getType();
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Called WrongAnimal Destructor" << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return (type_);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "(WrongAnimal sounds...)" << std::endl;
}
