/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 17:06:37 by ysaito            #+#    #+#             */
/*   Updated: 2021/06/21 17:40:50 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FILE_HPP_
#define _FILE_HPP_

#include <string>
#include <fstream>

class File {
private:
	std::string		m_fileName;
	std::string		m_srcStr;
	std::string		m_replaceStr;
	std::fstream	m_file;
	std::string		m_newFileName;
	std::fstream	m_newFile;
public:
	File(std::string file, std::string srcStr, std::string replaceStr);
	~File();
	bool	openFile();
	void	makeNewFileName();
	bool	openNewFile();
	void	readAndReplace();
	void	closeFile();
};

#endif //_FILE_HPP_