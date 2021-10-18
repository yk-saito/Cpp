/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 17:31:32 by ysaito            #+#    #+#             */
/*   Updated: 2021/09/11 14:49:15 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

#include <iostream>

Cure::Cure() : AMateria("cure")
{
	// std::cout << "Called Cure Constructor" << std::endl;
}

Cure::Cure(const Cure &other) : AMateria("cure")
{
	// std::cout << "Called Cure Copy Constructor" << std::endl;
	*this = other;
}

Cure	&Cure::operator=(const Cure &other)
{
	if (this != &other)
		this->type_ = other.type_;
	return (*this);
}

Cure::~Cure()
{
	// std::cout << "Called Cure Destructor" << std::endl;
}

AMateria*	Cure::clone() const
{
	AMateria	*new_materia;

	new_materia = new Cure();
	return (new_materia);
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals "
			  << target.getName()
			  << "'s wounds *" << std::endl;
}
