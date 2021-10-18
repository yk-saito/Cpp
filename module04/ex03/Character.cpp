/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 13:44:10 by ysaito            #+#    #+#             */
/*   Updated: 2021/09/13 20:32:42 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

#include <iostream>

Character::Character(std::string name) : name_(name)
{
	// std::cout << "Called Character Constructor" << std::endl;
	for (int i = 0; i < 4; i++)
		materia_inventory_[i] = NULL;
}

Character::Character(const Character &other)
{
	// std::cout << "Called Character Copy Constructor" << std::endl;
	for (int i = 0; i < 4; i++)
		materia_inventory_[i] = NULL;
	*this = other;
}

Character	&Character::operator=(const Character &other)
{
	if (this != &other)
	{
		for (int i = 0; i < 4; i++)
		{
			delete this->materia_inventory_[i];
			if (other.materia_inventory_[i] != NULL)
				this->materia_inventory_[i] = other.materia_inventory_[i]->clone();
			else
				this->materia_inventory_[i] = NULL;
		}
		this->name_ = other.name_;
	}
	return (*this);
}

Character::~Character()
{
	// std::cout  << "Called Character Destructor" << std::endl;
	for (int i = 0; i < 4;  i++)
	{
		if (materia_inventory_[i] != NULL)
			delete materia_inventory_[i];
			materia_inventory_[i] = NULL;
	}
}

std::string const & Character::getName() const
{
	return (name_);
}

AMateria *Character::getMateriaInventry(int idx) const
{
	if (idx < 0 || idx > 3)
		return (NULL);
	return (materia_inventory_[idx]);
}

void Character::equip(AMateria* m)
{
	if (m == NULL)
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (materia_inventory_[i] == m)
		{
			std::cout << "This [" << m->getType() << "] materia is already equipped." << std::endl;
			return ;
		}
		if (materia_inventory_[i] == NULL)
		{
			materia_inventory_[i] = m;
			return ;
		}
	}
	return ;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
		return ;
	if (materia_inventory_[idx] != NULL)
		materia_inventory_[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3 || materia_inventory_[idx] == NULL)
		return ;
	materia_inventory_[idx]->use(target);
}
