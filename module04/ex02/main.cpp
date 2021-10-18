/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 15:46:47 by ysaito            #+#    #+#             */
/*   Updated: 2021/09/11 18:28:37 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	const Dog*		j = new Dog();
	const Cat*		i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	delete j;
	delete i;

	std::cout << "\n----- Check Deep Copy -----" << std::endl;
	{
		Cat cat;
		cat.setBrainIdea("CAT'S IDEA");
		{
			Cat tmp_cat = cat;
			tmp_cat.setBrainIdea("TMP_CAT'S IDEA");
			tmp_cat.setBrainIdea("TMP_CAT'S IDEA02");
			cat.setBrainIdea("CAT'S IDEA02");

			std::cout << "CHECK tmp_cat's idea[0]: " << tmp_cat.getBrainIdea(0) << std::endl;
			std::cout << "CHECK tmp_cat's idea[1]: " << tmp_cat.getBrainIdea(1) << std::endl;
			std::cout << "CHECK tmp_cat's idea[2]: " << tmp_cat.getBrainIdea(2) << std::endl;
			std::cout << "CHECK cat's idea[0]: " << cat.getBrainIdea(0) << std::endl;
			std::cout << "CHECK cat's idea[1]: " << cat.getBrainIdea(1) << std::endl;
			std::cout << "CHECK cat's idea[2]: " << cat.getBrainIdea(2) << std::endl;
		}
	}

	/* ******************************************************** */
	/*	Check that the Animal class should not be instantiable. */
	/* ******************************************************** */

	//const Animal*	meta = new Animal();
	//meta->makeSound();
	//delete meta;

	return 0;
}
