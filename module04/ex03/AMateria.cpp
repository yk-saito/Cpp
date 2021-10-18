/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 21:47:59 by ysaito            #+#    #+#             */
/*   Updated: 2021/09/10 20:32:15 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

#include <iostream>
#include <string>

#include "ICharacter.hpp"

AMateria::AMateria(std::string const & type) : type_(type)
{
	// std::cout << "Called AMateria Constructor" << std::endl;
}

AMateria::AMateria(const AMateria &other)
{
	// std::cout << "Called AMateria Copy Constructor" << std::endl;
	*this = other;
}

AMateria	&AMateria::operator=(const AMateria &other)
{
	if (this != &other)
		this->type_ = other.type_;
	return (*this);
}


AMateria::~AMateria()
{
	// std::cout << "Called AMateria Destructor" << std::endl;
}

std::string const & AMateria::getType() const
{
	return (type_);
}

void	AMateria::use(ICharacter& target)
{
	if (type_ == "ice")
	{
		std::cout << "AMateria:: * shoots an ice bolt at "
				  << target.getName()
				  << " *" << std::endl;
	}
	else if (type_ == "cure")
	{
		std::cout << "AMateria:: * heals "
				  << target.getName()
				  << "'s wounds *" << std::endl;
	}
	else
	{
		std::cout << "No type..." << std::endl;
	}
}
