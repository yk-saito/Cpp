/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 15:22:49 by ysaito            #+#    #+#             */
/*   Updated: 2021/09/10 17:01:34 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
public:
	Dog();
	Dog(const Dog &other);
	Dog	&operator=(const Dog &other);
	virtual	~Dog();
	void		makeSound() const;
	void		setBrainIdea(const std::string idea);
	std::string	getBrainIdea(int index) const;
private:
	Brain*	brain_;
};

#endif
