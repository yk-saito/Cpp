/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 22:15:53 by ysaito            #+#    #+#             */
/*   Updated: 2021/10/22 22:19:05 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

template <typename T>
MutantStack<T>::MutantStack() {}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack& other) {}

template <typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack& other)
{}

template <typename T>
MutantStack<T>::~MutantStack() {}

template <typename T>
void	MutantStack<T>::push(const T& val) //Insert element
{}

template <typename T>
T&	MutantStack<T>::top() //Returns a reference to the top element in the stack.
{}

template <typename T>
const T&	MutantStack<T>::top() const
{}

template <typename T>
void	MutantStack<T>::pop()// Remove top element
{}

template <typename T>
size_type	MutantStack<T>::size() const
{}

template <typename T> //最初の位置を示すイテレータを作って返します。
MutantStack<T>::iterator	MutantStack<T>::begin()
{
	return (MutantStack<T>::iterator());
}

template <typename T>
const MutantStack<T>::iterator	MutantStack<T>::begin() const
{
	return (MutantStack<T>::iterator());
}

template <typename T>
MutantStack<T>::iterator	MutantStack<T>::end()
{
	return (MutantStack<T>::iterator());
}

template <typename T>
const MutantStack<T>::iterator	MutantStack<T>::end() const
{
	return (MutantStack<T>::iterator());
}

/*
**	class iterator
*/
template <typename T>
MutantStack<T>::iterator::iterator() : mstack_(NULL), index_(SIZE_MAX) {}

template <typename T>
MutantStack<T>::iterator::iterator(const iterator& other)
{}

template <typename T>
MutantStack<T>::iterator::~iterator()
{}

template <typename T>
MutantStack<T>::iterator&	MutantStack<T>::iterator::operator=(const iterator& other)
{}

template <typename T>
MutantStack<T>::iterator&	MutantStack<T>::iterator::operator++()
{}

template <typename T>
MutantStack<T>::iterator	MutantStack<T>::iterator::operator++(int)
{}

template <typename T>
MutantStack<T>::iterator&	MutantStack<T>::iterator::operator--()
{}

template <typename T>
MutantStack<T>::iterator	MutantStack<T>::iterator::operator--(int)
{}

template <typename T>
T&			MutantStack<T>::iterator::operator*()
{}

template <typename T>
const T&			MutantStack<T>::iterator::operator*() const
{}

template <typename T>
T&			MutantStack<T>::iterator::operator->()
{}

template <typename T>
const T&			MutantStack<T>::iterator::operator->() const
{}

template <typename T>
bool		MutantStack<T>::iterator::operator==(const iterator& rhs) const
{

}

template <typename T>
bool		MutantStack<T>::iterator::operator!=(const iterator& rhs) const
{}
