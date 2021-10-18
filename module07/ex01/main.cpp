/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 19:22:39 by ysaito            #+#    #+#             */
/*   Updated: 2021/10/18 08:45:26 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "iter.hpp"

template <typename T>
void	ft_show_array(const T* array, const size_t length, const std::string type)
{
	if (array == NULL)
		return ;
	std::cout << "\nShow array type: " << type << std::endl;
	for (size_t i = 0; i < length; i++)
	{
		std::cout << "array[" << i << "] = [" << array[i] << "]" << std::endl;
	}
}

template <typename T>
void	ft_zero_clear(T& element)
{
	element = static_cast<T>(0);
}

template <>
void	ft_zero_clear<std::string>(std::string& element)
{
	element =  "";
}

int	main()
{
	int			array_i[3] = {1, 2, 3};
	double		array_d[3] = {1.1, 2.2, 3.3};
	char		array_c[3] = {'a', 'b', 'c'};
	std::string	array_s[3] = {"test1", "test2" , "test3"};

	const std::size_t	array_i_size = (sizeof(array_i) / sizeof(array_i[0]));
	const std::size_t	array_d_size = (sizeof(array_d) / sizeof(array_d[0]));
	const std::size_t	array_c_size = (sizeof(array_c) / sizeof(array_c[0]));
	const std::size_t	array_s_size = (sizeof(array_s) / sizeof(array_s[0]));

	std::cout << "\n-----before-----" <<  std::endl;

	ft_show_array(array_i, array_i_size, "int");
	ft_show_array(array_d, array_d_size, "double");
	ft_show_array(array_c, array_c_size, "char");
	ft_show_array(array_s, array_s_size, "string");

	::iter(array_i, array_i_size, &ft_zero_clear);
	::iter(array_d, array_d_size, &ft_zero_clear);
	::iter(array_c, array_c_size, &ft_zero_clear);
	::iter(array_s, array_s_size, &ft_zero_clear);

	std::cout << "\n-----after------" <<  std::endl;
	ft_show_array(array_i, array_i_size, "int");
	ft_show_array(array_d, array_d_size, "double");
	ft_show_array(array_c, array_c_size, "char");
	ft_show_array(array_s, array_s_size, "string");

	return (0);
}
