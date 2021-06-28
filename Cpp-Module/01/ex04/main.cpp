/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 20:55:54 by ysaito            #+#    #+#             */
/*   Updated: 2021/06/21 17:40:05 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.hpp"
#include <iostream>

int	main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cout  << "Incorrect number of arguments." << std::endl;
		return (EXIT_FAILURE);
	}
	File	file(argv[1], argv[2], argv[3]);
	if (file.openFile() == false)
	{
		return (EXIT_FAILURE);
	}
	file.makeNewFileName();
	if(file.openNewFile() == false)
	{
		return (EXIT_FAILURE);
	}
	file.readAndReplace();
	file.closeFile();
	return (EXIT_SUCCESS);
}