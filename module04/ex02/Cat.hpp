/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 15:42:59 by ysaito            #+#    #+#             */
/*   Updated: 2021/09/10 17:01:26 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
public:
	Cat();
	Cat(const Cat &other);
	Cat	&operator=(const Cat &other);
	virtual ~Cat();
	void		makeSound() const;
	void		setBrainIdea(const std::string idea);
	std::string	getBrainIdea(int index) const;
private:
	Brain*	brain_;
};

#endif
