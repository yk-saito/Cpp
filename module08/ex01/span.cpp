/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 21:06:18 by ysaito            #+#    #+#             */
/*   Updated: 2021/10/26 22:33:15 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <set>

#include "span.hpp"

Span::Span(const unsigned int n) : size_(n)
{}
// Span::Span(const Span &other) {}
// Span &Span::operator=(const Span &other) {}

Span::~Span() {}

// void	Span::addNumber(const int num)
// {
// 	if (set_.size() >= size_)
// 		throw (Span::NumberAddException());
// 	set_.insert(num);
// }

// int	Span::shortestSpan() const
// {
// 	if (set_.size() == 0)
// 		throw  (Span::NumberEmptyException());
// 	if (set_.size() == 1)
// 		throw  (Span::NumberOnlyOneException());
// 	std::set<int>::iterator	itr = set_.begin();
// 	return (*itr);
// }

// int	Span::longestSpan() const
// {
// 	if (set_.size() == 0)
// 		throw  (Span::NumberEmptyException());
// 	if (set_.size() == 1)
// 		throw  (Span::NumberOnlyOneException());
// 	std::set<int>::iterator	itr = set_.end();
// 	return (*(--itr));
// }

// std::set<int>::iterator	Span::begin()
// {
// 	return (set_.begin());
// }

// const std::set<int>::iterator	Span::begin() const
// {
// 	return (set_.begin());
// }

void	Span::addNumber(const int num)
{
	if (this->vector_.size() >= this->size_)
		throw (Span::NumberAddException());
	this->vector_.push_back(num);
	std::sort(this->vector_.begin(), this->vector_.end());
}

int	Span::shortestSpan() const
{
	if (this->vector_.size() == 0)
		throw  (Span::NumberEmptyException());
	if (this->vector_.size() == 1)
		throw  (Span::NumberOnlyOneException());
	std::vector<const int>::iterator	itr = vector_.begin();
	return (*itr);
}

int	Span::longestSpan() const
{
	if (this->vector_.size() == 0)
		throw  (Span::NumberEmptyException());
	if (this->vector_.size() == 1)
		throw  (Span::NumberOnlyOneException());
	std::vector<const int>::iterator	itr = vector_.end();
	return (*(--itr));
}

std::vector<int>::iterator	Span::begin()
{
	return (this->vector_.begin());
}

// const std::vector<const int>::iterator	Span::begin() const
// {
// 	return (this->vector_.begin());
// }

std::vector<int>::iterator	Span::end()
{
	return (this->vector_.end());
}

// const std::vector<const int>::iterator	Span::end() const
// {
// 	return (this->vector_.end());
// }

const char* Span::NumberAddException::what() const throw()
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