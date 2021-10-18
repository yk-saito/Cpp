/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 20:55:54 by ysaito            #+#    #+#             */
/*   Updated: 2021/07/09 20:33:47 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.hpp"
#include <iostream>
#include <string.h>

int	main(int argc, char *argv[])
{
	if (argc != 4 || strlen(argv[2]) == 0 || strlen(argv[3]) == 0)
	{
		std::cout  << "Incorrect arguments." << std::endl;
		return (EXIT_FAILURE);
	}

	File	file(argv[1], argv[2], argv[3]);

	try
	{
		file.openFile();
		file.makeNewFileName();
		file.openNewFile();
		file.readAndReplace();
	}
	catch(const char *err_str)
	{
		std::cerr << err_str <<std::endl;
		return (EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);
}