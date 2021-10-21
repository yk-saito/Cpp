/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 19:22:39 by ysaito            #+#    #+#             */
/*   Updated: 2021/10/21 16:05:04 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "iter.hpp"

/*
**	test
*/
class Awesome
{
public:
	Awesome( void ) : _n( 42 ) { return; }
	int	get( void ) const { return this->_n; }
private:
	int _n;
};
std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

template< typename T >
void print( T const & x ) { std::cout << x << std::endl; return; }

/*
**	test my clear_element()
*/
template <typename T>
void	clear_element(T& element)
{
	element = static_cast<T>(0);
}

template <>
void	clear_element<std::string>(std::string& element)
{
	element =  "";
}

template< typename T >
void my_print( T const & x )
{
	std::cout << "[" << x << "]" << std::endl;
	return;
}


int	main()
{
	/********/
	/* test */
	/********/
	std::cout << "\n-----test------" <<  std::endl;
	int		tab[] = {0, 1, 2, 3, 4};
	Awesome	tab2[5];

	iter(tab, 5, print);
	iter(tab2, 5, print);

	/***************************/
	/* test my clear_element() */
	/***************************/
	double		array_d[3] = {1.1, 2.2, 3.3};
	char		array_c[3] = {'a', 'b', 'c'};
	std::string	array_s[3] = {"test1", "test2", "test3"};

	const std::size_t	array_d_size = (sizeof(array_d) / sizeof(array_d[0]));
	const std::size_t	array_c_size = (sizeof(array_c) / sizeof(array_c[0]));
	const std::size_t	array_s_size = (sizeof(array_s) / sizeof(array_s[0]));

	std::cout << "\n-----before-----" <<  std::endl;
	iter(array_d, array_d_size, my_print);
	iter(array_c, array_c_size, my_print);
	iter(array_s, array_s_size, my_print);

	iter(array_d, array_d_size, clear_element);
	iter(array_c, array_c_size, clear_element);
	iter(array_s, array_s_size, clear_element);

	std::cout << "-----after------" <<  std::endl;
	iter(array_d, array_d_size, my_print);
	iter(array_c, array_c_size, my_print);
	iter(array_s, array_s_size, my_print);

	return (0);
}
