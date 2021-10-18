/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 21:13:56 by ysaito            #+#    #+#             */
/*   Updated: 2021/07/09 13:28:00 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void	stringPTR(std::string *ptr_str)
{
	if (ptr_str)
	{
		std::cout << "pointer  : " << ptr_str
			  << " : " << *ptr_str << std::endl;
	}
}

void	stringREF(const std::string& ref_str)
{
	std::cout << "reference: " << &ref_str
			  << " : " << ref_str << std::endl;
}

int	main(void)
{
	std::string	str = "HI THIS IS BRAIN";

	std::cout << "string   : " << &str << std::endl;
	stringPTR(&str);
	stringREF(str);
	return (0);
}