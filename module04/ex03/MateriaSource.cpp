/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 14:42:13 by ysaito            #+#    #+#             */
/*   Updated: 2021/09/12 21:17:22 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

#include <iostream>

#include "Cure.hpp"
#include "Ice.hpp"

MateriaSource::MateriaSource()
{
	// std::cout << "Called MateriaSource Constructor" << std::endl;
	for (int i = 0; i < 4; i++)
		materia_inventory_[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
	// std::cout << "Called MateriaSource Copy Constructor" << std::endl;
	for (int i = 0; i < 4; i++)
		materia_inventory_[i] = NULL;
	*this = other;
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &other)
{
	if (this != &other)
	{
		for (int i = 0; i < 4; i++)
		{
			if (other.materia_inventory_[i] != NULL)
				this->materia_inventory_[i] = other.materia_inventory_[i]->clone();
		}
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	// std::cout << "Called MateriaSource Destructor" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (materia_inventory_[i] != NULL)
			delete materia_inventory_[i];
	}
}

void	MateriaSource::learnMateria(AMateria* materia_obj)
{
	if (materia_obj == NULL)
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (materia_inventory_[i] == materia_obj)
		{
			std::cout << "This [" << materia_obj->getType() << "] materia has been learned." << std::endl;
			return ;
		}
		if (materia_inventory_[i] == NULL)
		{
			materia_inventory_[i] = materia_obj;
			return ;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (materia_inventory_[i] != NULL && (materia_inventory_[i]->getType() == type))
			return materia_inventory_[i]->clone();
	}
	return 0;
}