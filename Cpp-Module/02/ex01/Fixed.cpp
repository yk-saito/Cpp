/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 17:14:23 by ysaito            #+#    #+#             */
/*   Updated: 2021/07/05 20:36:24 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

const int Fixed::m_bits = 8;

Fixed::Fixed() : m_fixed_value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called" << std::endl;

	m_fixed_value = other.getRawBits();
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

void	Fixed::operator=(const Fixed& other)
{
	std::cout << "Assignation operator called" << std::endl;

	m_fixed_value = other.getRawBits();
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called"  << std::endl;

	return (m_fixed_value);
}

void	Fixed::setRawBits(int const raw)
{
	m_fixed_value = raw;
}