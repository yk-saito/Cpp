/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 15:46:47 by ysaito            #+#    #+#             */
/*   Updated: 2021/09/11 18:27:35 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();


	delete j;//should not create a leak
	delete i;

	std::cout << "\n----- Animal Array --------" << std::endl;
	Animal** ary_animal = new Animal*[2];
	ary_animal[0] = new Dog();
	ary_animal[1] = new Cat();

	for (int i = 0; i < 2; i++)
		ary_animal[i]->makeSound();
	for (int j = 0; j < 2; j++)
		delete ary_animal[j];
	delete[] ary_animal;

	std::cout << "\n----- Check Deep Copy -----" << std::endl;
	{
		Dog dog;
		dog.setBrainIdea("DOG'S IDEA");
		{
			Dog tmp_dog = dog;
			tmp_dog.setBrainIdea("TMP_DOG'S IDEA");
			tmp_dog.setBrainIdea("TMP_DOG'S IDEA02");
			dog.setBrainIdea("DOG'S IDEA02");

			std::cout << "CHECK tmp_dog's idea[0]: " << tmp_dog.getBrainIdea(0) << std::endl;
			std::cout << "CHECK tmp_dog's idea[1]: " << tmp_dog.getBrainIdea(1) << std::endl;
			std::cout << "CHECK tmp_dog's idea[2]: " << tmp_dog.getBrainIdea(2) << std::endl;
			std::cout << "CHECK dog's idea[0]: " << dog.getBrainIdea(0) << std::endl;
			std::cout << "CHECK dog's idea[1]: " << dog.getBrainIdea(1) << std::endl;
			std::cout << "CHECK dog's idea[2]: " << dog.getBrainIdea(2) << std::endl;
		}
	}
	return (0);
}