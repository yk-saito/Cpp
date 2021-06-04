/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 16:25:38 by ysaito            #+#    #+#             */
/*   Updated: 2021/06/04 16:42:46 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void	to_pointer(std::string *pstr)
{
	std::cout << "pointer: " << *pstr << std::endl;
}

void	to_reference(std::string& rstr)
{
	std::cout << "reference: " << rstr << std::endl;
}

int	main(void)
{
	std::string	str = "HI THIS IS BRAIN";

	to_pointer(&str);
	to_reference(str);

	return (0);
}