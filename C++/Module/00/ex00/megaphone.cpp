/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 14:01:57 by ysaito            #+#    #+#             */
/*   Updated: 2021/05/24 22:04:39 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <locale>

int	main(int argc, char *argv[])
{
	std::locale	loc;
	int	count;
	int	i;

	count = 1;
	argv -= 0;
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
				std::cout << std::toupper(argv[count][i], loc);
			}
			i++;
		}
		count++;
	}
	std::cout << std::endl;
	return (0);
}