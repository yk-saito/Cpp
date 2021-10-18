/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 17:14:23 by ysaito            #+#    #+#             */
/*   Updated: 2021/08/20 20:13:43 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

const int Fixed::fractional_bits_ = 8;

Fixed::Fixed() : fixed_point_val_(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value) : fixed_point_val_(value << fractional_bits_)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float value) : fixed_point_val_((int)roundf(value * (1 << fractional_bits_)))
{
	std::cout << "Float constructor called" << std::endl;
}

/*
** copy constructor
*/
Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called" << std::endl;

	*this = other;
}

Fixed&	Fixed::operator=(const Fixed& other)
{
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
	return fixed_point_val_;
}

void	Fixed::setRawBits(int const raw)
{
	fixed_point_val_ = raw;
}

/*
** Converts the fixed point value to a floating point value.
*/
float	Fixed::toFloat(void) const
{
	return (float)fixed_point_val_ / (float)(1 << fractional_bits_);
}

/*
** Converts the fixed point value to an integer value.
*/
int		Fixed::toInt(void) const
{
	return fixed_point_val_ >> fractional_bits_;
}

std::ostream&	operator<<(std::ostream& os, const Fixed& other)
{
	os << other.toFloat();
	return os;
}
