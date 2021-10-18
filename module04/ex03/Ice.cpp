/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 17:31:41 by ysaito            #+#    #+#             */
/*   Updated: 2021/09/11 14:49:26 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

#include <iostream>

Ice::Ice() : AMateria("ice")
{
	// std::cout << "Called Ice Constructor" << std::endl;
}

Ice::Ice(const Ice &other) : AMateria("cure")
{
	// std::cout << "Called Ice Copy Constructor" << std::endl;
	*this = other;
}

Ice	&Ice::operator=(const Ice &other)
{
	if (this != &other)
		this->type_ = other.type_;
	return (*this);
}

Ice::~Ice()
{
	// std::cout << "Called  Ice Destructor" << std::endl;
}

AMateria*	Ice::clone() const
{
	AMateria	*new_materia;

	new_materia = new Ice();
	return (new_materia);
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at "
			  << target.getName()
			  << " *" << std::endl;
}
