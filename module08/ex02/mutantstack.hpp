/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 22:06:24 by ysaito            #+#    #+#             */
/*   Updated: 2021/10/22 22:18:25 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iterator>

template <typename T>
class MutantStack
{
public:
	class iterator : public std::iterator<std::bidirectional_iterator_tag, T> {
		public:
			iterator();
			iterator(const iterator& other);
			~iterator();
			iterator&	operator=(const iterator& other);
			iterator&	operator++();
			iterator	operator++(int);
			iterator&	operator--();
			iterator	operator--(int);
			T&			operator*();
			const T&	operator*() const;
			T&			operator->();
			const T&	operator->() const;
			bool		operator==(const iterator& rhs) const;
			bool		operator!=(const iterator& rhs) const;
		private:
			MutantStack*	mstack_;
			size_t			index_;
	};
	MutantStack();
	MutantStack(const MutantStack& other);
	MutantStack& operator=(const MutantStack& other);
	~MutantStack();
	void		push(const T& val); //Insert element
	T&			top(); //Returns a reference to the top element in the stack.
	const T&	top() const;
	void		pop();// Remove top element
	size_type	size() const;
	MutantStack<T>::iterator	begin();
	const MutantStack<T>::iterator	begin() const;
	MutantStack<T>::iterator	end();
	const MutantStack<T>::iterator	end()const;
private:

};

#endif /* MUTANTSTACK_HPP */
