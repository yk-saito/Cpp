/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 15:46:47 by ysaito            #+#    #+#             */
/*   Updated: 2021/09/11 18:27:42 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal*	meta = new Animal();
	const Animal*	j = new Dog();
	const Animal*	i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete j;
	delete i;

	std::cout << "----- Test Wrong class -----" << std::endl;
	const WrongAnimal*	wrong_animal = new WrongAnimal();
	const WrongAnimal*	wrong_cat = new WrongCat();

	std::cout << wrong_cat->getType() << std::endl;
	wrong_cat->makeSound();
	wrong_animal->makeSound();

	delete wrong_animal;
	delete wrong_cat;

	return (0);
}