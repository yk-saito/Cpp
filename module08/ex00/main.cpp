/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 13:48:18 by ysaito            #+#    #+#             */
/*   Updated: 2021/10/18 14:14:33 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "easyfind.hpp"

int	main()
{
	std::vector<int>			vector_i = {1, 4, 2, 3, 2, 5};
	std::vector<int>::iterator	iterator_i;

	try
	{
		iterator_i = easyfind(vector_i, 2);
	}
	catch(const std::string error_str)
	{
		std::cerr << error_str << std::endl;
	}
	return (0);
}