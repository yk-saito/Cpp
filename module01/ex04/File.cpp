/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 17:07:40 by ysaito            #+#    #+#             */
/*   Updated: 2021/07/10 19:58:54 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.hpp"
#include <iostream>
#include <fstream>
#include <cstdlib>

File::File()
{
}

File::File(std::string file, std::string srcStr, std::string replStr) : m_fileName(file), m_srcStr(srcStr), m_replStr(replStr)
{
}

File::~File()
{
}

void	File::openFile()
{
	m_file.open(m_fileName, std::ios::in);
	if  (! m_file.is_open())
	{
		throw "The file did not open.";
	}
}

void	File::makeNewFileName()
{
	m_newFileName = m_fileName + ".replace";
}

void	File::openNewFile()
{
	m_newFile.open(m_newFileName, std::ios::out);
	if (! m_newFile.is_open())
	{
		throw "The file did not open.";
	}
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
				buf.erase(pos, m_srcStr.length());
				buf.insert(pos, m_replStr);
				pos += m_replStr.length();
			}
		}
		m_newFile << buf <<  std::endl;
	}
}
