/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 21:13:56 by ysaito            #+#    #+#             */
/*   Updated: 2021/06/24 21:34:43 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void	stringPTR(std::string *pstr)
{
	std::cout << "pointer  : " << pstr
			  << " " << *pstr << std::endl;
}

void	stringREF(std::string& rstr)
{
	std::cout << "reference: " << &rstr
			  << " " << rstr << std::endl;
}

int	main(void)
{
	std::string	str = "HI THIS IS BRAIN";

	std::cout << "string   : " << &str << std::endl;
	stringPTR(&str);
	stringREF(str);
	return (0);
}