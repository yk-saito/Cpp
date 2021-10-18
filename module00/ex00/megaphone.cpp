/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 14:01:57 by ysaito            #+#    #+#             */
/*   Updated: 2021/06/19 19:39:37 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int	main(int argc, char *argv[])
{
	int	count;
	int	i;

	count = 1;
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	while (argv[count])
	{
		i = 0;
		while (argv[count][i])
		{
			if (argv[count][i] != '"')
			{
				std::cout << (char)std::toupper(argv[count][i]);
			}
			i++;
		}
		count++;
	}
	std::cout << std::endl;
	return (0);
}