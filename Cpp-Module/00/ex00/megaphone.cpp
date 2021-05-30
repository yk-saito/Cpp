/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 14:01:57 by ysaito            #+#    #+#             */
/*   Updated: 2021/05/28 17:00:04 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <locale>

char	ft_toupper(char c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 'a' + 'A';
	return (c);
}

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
				std::cout << ft_toupper(argv[count][i]);
			}
			i++;
		}
		count++;
	}
	std::cout << std::endl;
	return (0);
}