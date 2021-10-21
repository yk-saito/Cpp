/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 21:06:18 by ysaito            #+#    #+#             */
/*   Updated: 2021/10/21 22:14:46 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <set>

#include "span.hpp"

Span::Span(const unsigned int n) : size_(n)
{}
// Span::Span(const Span &other) {}
// Span &Span::operator=(const Span &other) {}

Span::~Span() {}

void	Span::addNumber(const int num)
{
	if (set_.size() >= size_)
		throw (Span::NumberAddException());
	set_.insert(num);
}

int	Span::shortestSpan() const
{
	if (set_.size() == 0 || set_.size() == 1)
		throw  (Span::NumberEmptyException());
	std::set<int>::iterator	itr = set_.begin();
	return (*itr);
}

int	Span::longestSpan() const
{
	if (set_.size() == 0 || set_.size() == 1)
		throw  (Span::NumberEmptyException());
	std::set<int>::iterator	itr = set_.end();
	return (*(--itr));
}

const char* Span::NumberAddException::what() const throw()
{
	return ("Number cannot be added because full.");
}

const char* Span::NumberEmptyException::what() const throw()
{
	return ("Cannot search because number is one or empty.");
}