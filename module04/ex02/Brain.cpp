/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 17:21:08 by ysaito            #+#    #+#             */
/*   Updated: 2021/09/10 20:28:09 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

#include <iostream>

Brain::Brain() : idx_ideas_(0)
{
	std::cout << "Called Brain Default Constructor" << std::endl;
}

Brain::Brain(const Brain &other)
{
	std::cout << "Called Brain Copy Constructor" << std::endl;
	*this = other;
}

Brain &Brain::operator=(const Brain &other)
{
	if  (this != &other)
	{
		for (int i = 0; other.ideas_[i] != ""; i++)
		{
			this->ideas_[i] = other.ideas_[i];
			idx_ideas_++;
		}
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Called Brain Destructor" << std::endl;
}

void	Brain::setIdea(const std::string idea)
{
	if (idx_ideas_ == 100)
		return ;
	ideas_[idx_ideas_] = idea;
	idx_ideas_++;
}

std::string	Brain::getIdea(int index) const
{
	if (index < 0 || index >= 100)
		return ("Error Index...");
	return (ideas_[index]);
}