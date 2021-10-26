/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 13:48:18 by ysaito            #+#    #+#             */
/*   Updated: 2021/10/26 18:06:42 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "easyfind.hpp"

int	main()
{
	int					array_i[] = {-1, 4, 2, 3, 2, -5};
	std::vector<int>	vector_i(array_i, array_i + (sizeof(array_i) / sizeof(int)));

	const int				const_array_i[] = {0, 1, 10, 9, 3, 1};
	const std::vector<int>	const_vector_i(const_array_i, const_array_i + (sizeof(const_array_i) / sizeof(int)));

	try
	{
		::easyfind(vector_i, 2);
		::easyfind(vector_i, 10);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		::easyfind(const_vector_i, 1);
		::easyfind(const_vector_i, -2);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}