/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 13:21:47 by ysaito            #+#    #+#             */
/*   Updated: 2021/08/20 22:35:21 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main( void ) {

	Fixed			a;
	Fixed const		b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;


	std::cout << "\n----- Add test -----" << std::endl;
	std::cout << std::boolalpha;

	Fixed const		lhs( 5.05f );
	Fixed const		rhs( 2 );
	Fixed const		add( lhs + rhs );
	Fixed const		sub( lhs - rhs );
	Fixed const		mul( lhs * rhs );
	Fixed const		div( lhs / rhs );

	std::cout << lhs.toFloat() << " > " << rhs.toInt() << "  ? " << (lhs > rhs) << std::endl;
	std::cout << lhs.toFloat() << " < " << rhs.toInt() << "  ? " << (lhs < rhs) << std::endl;
	std::cout << lhs.toFloat() << " >= " << rhs.toInt() << " ? " << (lhs >= rhs) << std::endl;
	std::cout << lhs.toFloat() << " <= " << rhs.toInt() << " ? " << (lhs <= rhs) << std::endl;
	std::cout << lhs.toFloat() << " == " << rhs.toInt() << " ? " << (lhs == rhs) << std::endl;
	std::cout << lhs.toFloat() << " != " << rhs.toInt() << " ? " << (lhs != rhs) << std::endl;
	std::cout << lhs.toFloat() << " + " << rhs.toInt() << "  = " << add << std::endl;
	std::cout << lhs.toFloat() << " - " << rhs.toInt() << "  = " << sub << std::endl;
	std::cout << lhs.toFloat() << " * " << rhs.toInt() << "  = " << mul << std::endl;
	std::cout << lhs.toFloat() << " / " << rhs.toInt() << "  = " << div << std::endl;
	std::cout << "[MIN] " << lhs.toFloat() << " vs " << rhs.toInt() << " = " << Fixed::min( lhs, rhs ) << std::endl;
    
    return 0;
}
