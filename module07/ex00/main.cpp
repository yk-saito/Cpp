/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 17:13:45 by ysaito            #+#    #+#             */
/*   Updated: 2021/10/22 14:53:34 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "whatever.hpp"

/*
**	Awesome test
*/
class Awesome {
public:
	Awesome( int n ) : _n( n ) {}
	bool operator==( Awesome const & rhs ) const { return (this->_n == rhs._n); }
	bool operator!=( Awesome const & rhs ) const{ return (this->_n != rhs._n); }
	bool operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); }
	bool operator<( Awesome const & rhs ) const { return (this->_n < rhs._n); }
	bool operator>=( Awesome const & rhs ) const { return (this->_n >= rhs._n); }
	bool operator<=( Awesome const & rhs ) const { return (this->_n <= rhs._n); }
	int	Getter() const { return (_n); } // add
private:
	int _n;
};

std::ostream&	operator<<(std::ostream& os, const Awesome& other)
{
	os << other.Getter();
	return os;
}

int	main( void ) {

	int	a = 2;
	int	b = 3;

	::swap(a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
	std::cout << "max(a, b) = " << ::max(a, b) << std::endl;

	std::string	c = "chaine1";
	std::string	d = "chaine2";

	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min(c, d) = " << ::min(c, d) << std::endl;
	std::cout << "max(c, d) = " << ::max(c, d) << std::endl;

	/****************/
	/* Awesome test */
	/****************/
	std::cout << "\n----- Awesome test -----" << std::endl;
	Awesome	awesome1(10);
	Awesome	awesome2(20);

	::swap(awesome1, awesome2);
	std::cout << "awesome1 = " << awesome1 << ", awesome2 = " << awesome2 << std::endl;
	std::cout << "min(awesome1, awesome2) = " << ::min(awesome1, awesome2) << std::endl;
	std::cout << "max(awesome1, awesome2) = " << ::max(awesome1, awesome2) << std::endl;

	return 0;
}
