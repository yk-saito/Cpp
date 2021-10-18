/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 16:23:12 by ysaito            #+#    #+#             */
/*   Updated: 2021/09/10 19:56:33 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

#include <iostream>

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "Called WrongCat Default Constructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other)
{
	std::cout << "Called WrongCat Copy Constructor" << std::endl;
	*this = other;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
	if (this != &other)
		this->type_ = other.getType();
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "Called WrongCat Destructor" << std::endl;
}

void	WrongCat::makeSound() const
{
	std::cout << "WrongCat Meow!" << std::endl;
}
