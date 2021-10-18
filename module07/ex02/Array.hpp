/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 21:02:49 by ysaito            #+#    #+#             */
/*   Updated: 2021/10/17 00:16:51 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>
#include <iostream>

template <typename T>
class Array
{
public:
	Array() : array_(new T[0]()), size_(0) {
	};

	Array(unsigned int n) : array_(new T[n]()), size_(n) {
	};

	Array(const Array& other) {
		*this = other;
	};

	~Array() {
		delete[] this->array_;
	};

	Array&	operator=(const Array& other) {
		if (this == &other)
			return (*this);
		this->size_ = other.size_;
		this->array_ = new T[this->size_]();
		for (unsigned int i = 0; i  < this->size_; i++)
		{
			this->array_[i] = other.array_[i];
		}
		return (*this);
	};

	T&	operator[](const unsigned int index) {
		if (index >= this->size_)
			throw (std::out_of_range("out_of_range: invalid index!"));
		return (this->array_[index]);
	};

	unsigned int	size() {
		return (this->size_);
	};

private:
	T*				array_;
	unsigned int	size_;
};

#endif /* ARRAY_HPP */