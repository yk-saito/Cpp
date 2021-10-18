/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 22:02:08 by ysaito            #+#    #+#             */
/*   Updated: 2021/09/13 20:33:20 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "IMateriaSource.hpp"
#include "ICharacter.hpp"
#include "MateriaSource.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();

	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);


	std::cout << "\n----- Check Character Copy ------------" << std::endl;

	Character alice = Character("Alice");

	tmp = src->createMateria("ice");
	alice.equip(tmp);

	Character tmp_alice = alice;

	alice.use(0, *bob);
	tmp_alice.use(0, *bob);

	AMateria *save_tmpalice_materia[4];
	for (int i = 0; i < 4; i++)
		save_tmpalice_materia[i] = tmp_alice.getMateriaInventry(i);
	tmp_alice.unequip(0);
	tmp = src->createMateria("cure");
	tmp_alice.equip(tmp);

	std::cout << "-----after tmp_alice equip Materia-----" << std::endl;
	alice.use(0, *bob);
	tmp_alice.use(0, *bob);

	for (int i = 0; i < 4;  i++)
	{
		delete save_tmpalice_materia[i];
		save_tmpalice_materia[i] = NULL;
	}

	delete bob;
	delete me;
	delete src;

	return 0;
}