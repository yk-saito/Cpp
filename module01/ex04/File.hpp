/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 17:06:37 by ysaito            #+#    #+#             */
/*   Updated: 2021/07/10 19:58:25 by ysaito           ###   ########.fr       */
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
	std::string		m_replStr;
	std::fstream	m_file;
	std::string		m_newFileName;
	std::fstream	m_newFile;
public:
	File();
	File(std::string file, std::string srcStr, std::string replStr);
	~File();
	void	openFile();
	void	makeNewFileName();
	void	openNewFile();
	void	readAndReplace();
};

#endif //_FILE_HPP_