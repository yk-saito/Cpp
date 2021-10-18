/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 13:22:05 by ysaito            #+#    #+#             */
/*   Updated: 2021/08/20 22:23:42 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

const int Fixed::fractional_bits_ = 8;

Fixed::Fixed() : fixed_point_val_(0)
{
}

Fixed::Fixed(const int value) : fixed_point_val_(value << fractional_bits_)
{
}

Fixed::Fixed(const float value) : fixed_point_val_((int)roundf(value * (1 << fractional_bits_)))
{
}

/*
** copy constructor
*/
Fixed::Fixed(const Fixed& other)
{
	*this = other;
}

/*
** Operator Overloads
*/
Fixed&	Fixed::operator=(const Fixed& other)
{
	fixed_point_val_ = other.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
}

bool	Fixed::operator>(const Fixed &rhs) const
{
	return fixed_point_val_ > rhs.getRawBits();
}

bool	Fixed::operator<(const Fixed &rhs) const
{
	return fixed_point_val_ < rhs.getRawBits();
}

bool	Fixed::operator>=(const Fixed &rhs) const
{
	return fixed_point_val_ >= rhs.getRawBits();
}

bool	Fixed::operator<=(const Fixed &rhs) const
{
	return fixed_point_val_ <= rhs.getRawBits();
}

bool	Fixed::operator==(const Fixed &rhs) const
{
	return fixed_point_val_ == rhs.getRawBits();
}

bool	Fixed::operator!=(const Fixed &rhs) const
{
	return fixed_point_val_ != rhs.getRawBits();
}

Fixed	Fixed::operator+(const Fixed &rhs) const
{
	Fixed	ret_obj;
	ret_obj.setRawBits(fixed_point_val_ + rhs.getRawBits());
	return ret_obj;
}

Fixed	Fixed::operator-(const Fixed &rhs) const
{
	Fixed	ret_obj;
	ret_obj.setRawBits(fixed_point_val_ - rhs.getRawBits());
	return ret_obj;
}

Fixed	Fixed::operator*(const Fixed &rhs) const
{
	Fixed		ret_obj;
	long long	mul_val;

	mul_val = (long long)fixed_point_val_ * (long long)rhs.getRawBits();
	ret_obj.setRawBits(mul_val >> 8);
	return ret_obj;
}

Fixed	Fixed::operator/(const Fixed &rhs) const
{
	Fixed		ret_obj;
	long long	div_val;

	div_val = ((long long)fixed_point_val_ << 8) / rhs.getRawBits();
	ret_obj.setRawBits(div_val);
	return ret_obj;
}

Fixed&	Fixed::operator++()
{
	++fixed_point_val_;
	return *this;
}

Fixed	Fixed::operator++(int)
{
	Fixed	ret_obj = *this;
	
    ++(*this);
	return ret_obj;
}

Fixed&	Fixed::operator--()
{
    --fixed_point_val_;
	return *this;
}

Fixed	Fixed::operator--(int)
{
	Fixed	ret_obj = *this;
	
    --(*this);
	return ret_obj;
}

int	Fixed::getRawBits(void) const
{
	return fixed_point_val_;
}

void	Fixed::setRawBits(int const raw)
{
	fixed_point_val_ = raw;
}

float	Fixed::toFloat(void) const
{
	return (float)fixed_point_val_ / (float)(1 << fractional_bits_);
}

int		Fixed::toInt(void) const
{
	return fixed_point_val_ >> fractional_bits_;
}

std::ostream&	operator<<(std::ostream &os, const Fixed &other)
{
	os << other.toFloat();
	return os;
}

Fixed&	Fixed::min(Fixed &obj_1, Fixed &obj_2)
{
	if (obj_1 <= obj_2)
		return obj_1;
	else
		return obj_2;
}

const Fixed&	Fixed::min(const Fixed &obj_1, const Fixed &obj_2)
{
	if (obj_1 <= obj_2)
		return obj_1;
	else
		return obj_2;
}

Fixed&	Fixed::max(Fixed &obj_1, Fixed &obj_2)
{
	if (obj_1 >= obj_2)
		return obj_1;
	else
		return obj_2;
}

const Fixed&	Fixed::max(const Fixed &obj_1, const Fixed &obj_2)
{
	if (obj_1 >= obj_2)
		return obj_1;
	else
		return obj_2;
}
