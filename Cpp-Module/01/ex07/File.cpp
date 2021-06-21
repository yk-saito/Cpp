/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 17:07:40 by ysaito            #+#    #+#             */
/*   Updated: 2021/06/21 17:40:38 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.hpp"
#include <iostream>
#include <fstream>
#include <cstdlib>

File::File(std::string file, std::string srcStr, std::string replaceStr)
{
	m_fileName = file;
	m_srcStr = srcStr;
	m_replaceStr = replaceStr;
}

File::~File()
{
}

bool	File::openFile()
{
	m_file.open(m_fileName, std::ios::in);
	if  (! m_file.is_open())
	{
		std::cerr << "The file did not open." << std::endl;
		return (false);
	}
	return (true);
}

void	File::makeNewFileName()
{
	std::string::size_type	posExt = 0; // position extension
	posExt = m_fileName.find(".", posExt);
	if (posExt == std::string::npos)
	{
		m_newFileName = m_fileName + ".replace";
	}
	else
	{
		m_newFileName = m_fileName.substr(0, posExt) + ".replace";
	}
}

bool	File::openNewFile()
{
	m_newFile.open(m_newFileName, std::ios::out);
	if (! m_newFile.is_open())
	{
		std::cerr << "The file did not open." << std::endl;
		return (false);
	}
	return (true);
}

void	File::readAndReplace()
{
	std::string	buf;

	while (std::getline(m_file, buf))
	{
		if (! buf.empty())
		{
			std::string::size_type	pos = 0;
			while ((pos = buf.find(m_srcStr, pos)) != std::string::npos)
			{
				buf.replace(pos, m_srcStr.length(), m_replaceStr);
				pos += m_replaceStr.length();
			}
			m_newFile << buf <<  std::endl;
		}
	}
}

void	File::closeFile()
{
	m_file.close();
	m_newFile.close();
}