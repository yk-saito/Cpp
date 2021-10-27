/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 21:06:18 by ysaito            #+#    #+#             */
/*   Updated: 2021/10/27 18:22:48 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <set>
#include <vector>

#include "span.hpp"

Span::Span() : size_(0) {}

Span::Span(const unsigned int n) : size_(n) {}

Span::Span(const Span &other)
{
	*this = other;
}

Span &Span::operator=(const Span &other)
{
	if (this == &other)
		return (*this);
	this->set_ = other.set_;
	this->size_ = other.size_;
	return (*this);
}

Span::~Span() {}

void	Span::addNumber(const int num)
{
	if (set_.size() >= size_)
		throw (Span::NumberFullException());
	set_.insert(num);
}

void	Span::addNumberFromItr(ConstVectorIterator begin, ConstVectorIterator end)
{
	for (; begin != end; ++begin)
	{
		if (set_.size() >= size_)
			throw (Span::NumberFullException());
		this->addNumber(*begin);
	}
}

unsigned int	Span::shortestSpan() const
{
	if (set_.size() == 0)
		throw  (Span::NumberEmptyException());
	if (set_.size() == 1)
		throw  (Span::NumberOnlyOneException());

	SetIterator		itr = set_.begin();
	SetIterator		itr_next = ++set_.begin();
	SetIterator		itr_end = set_.end();
	unsigned int	shortest = (*itr_next - *itr);
	unsigned int	diff = shortest;

	for (; itr_next != itr_end;)
	{
		if (shortest > diff)
			shortest = diff;
		diff = (*(++itr_next) - *(++itr));
	}
	return (shortest);
}

unsigned int	Span::longestSpan() const
{
	if (set_.size() == 0)
		throw  (Span::NumberEmptyException());
	if (set_.size() == 1)
		throw  (Span::NumberOnlyOneException());
	SetIterator	itr = set_.begin();
	SetIterator	itr_end = set_.end();
	return (*(--itr_end) - *itr);
}

void	Span::printNumber(unsigned int print_num) const
{
	ConstSetIterator	itr = set_.begin();
	ConstSetIterator	itr_end = set_.end();
	int	index = 0;

	for (; itr != itr_end; ++itr)
	{
		if (index >= print_num)
			return ;
		std::cout << "[" << index << "]" << *itr << std::endl;
		++index;
	}
}
void	Span::printNumberEnd(unsigned int print_num) const
{
	ConstSetIterator	itr_begin = set_.end();
	ConstSetIterator	itr_end = set_.end();

	for (int count = 0; count < print_num; ++count)
	{
		--itr_begin;
	}
	int	index = (size_ - print_num);
	for (; itr_begin != itr_end; ++itr_begin)
	{
		std::cout << "[" << index << "]" << *itr_begin << std::endl;
		++index;
	}
}

const char* Span::NumberFullException::what() const throw()
{
	return ("Number cannot be added because full.");
}

const char* Span::NumberEmptyException::what() const throw()
{
	return ("Can't search because number isn't stored.");
}

const char* Span::NumberOnlyOneException::what() const throw()
{
	return ("Can't search because number stored only one.");
}