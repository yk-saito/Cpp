/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 20:32:54 by ysaito            #+#    #+#             */
/*   Updated: 2021/08/14 17:17:09 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

const int Fixed::fractional_bits_ = 8;

Fixed::Fixed() : fixed_point_val_(0)
{
	std::cout << "Default constructor called" << std::endl;
}

/*
** Copy constructor
*/
Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

/*
** Assignation operator overload
*/
Fixed&	Fixed::operator=(const Fixed& other)
{
	if (this == &other)
		return *this;
	std::cout << "Assignation operator called" << std::endl;
	fixed_point_val_ = other.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called"  << std::endl;
	return fixed_point_val_;
}

void	Fixed::setRawBits(int const raw)
{
	fixed_point_val_ = raw;
}