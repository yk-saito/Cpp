/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 15:36:44 by ysaito            #+#    #+#             */
/*   Updated: 2021/09/16 10:27:55 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
	: Form("ShrubberyCreationForm", "None", 145, 137)
{}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
	: Form("ShrubberyCreationForm", target, 145, 137)
{}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other)
{
	*this = other;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	if (this != &other) {}
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	Form::isExecute(executor);

	std::ofstream	new_file;
	std::string		file_name = this->getTarget() + "_shrubbery";

	new_file.open(file_name, std::ofstream::out);
	if (! new_file.is_open())
	{
		std::cout << "File Open Error in ShrubberyCreationForm::execute()." << std::endl;
		return ;
	}
	new_file << "        . . .\n"
			 << "      .        .  .     ..    .\n"
			 << "   .                  .         .  .\n"
			 << "                   .\n"
			 << "                  .                 ..\n"
			 << "  .           .            .              .\n"
			 << "  .             '.,        .               .\n"
			 << "  .               'b      *\n"
			 << "    .              '$    #.                ..\n"
			 << "  .     .           $:   #:               .\n"
			 << "..       .  ..      *#  @):        .   . .\n"
			 << "              .     :@,@):   ,.**:'   .\n"
			 << " .       .,         :@@*: ..**'      .   .\n"
			 << "           '#o.    .:(@'.@*\"'  .\n"
			 << "  .  .        \'bq,..:,@@*\'   ,*      .  .\n"
			 << "              ,p$q8,:@)\'  .p*\'      .\n"
			 << "       .     \'  . \'@@Pp@@*\'    .  .\n"
			 << "        .  . ..    Y7\'.\'     .  .\n"
			 << "                  :@):.\n"
			 << "                 .:@:\'.\n"
			 << "               .::(@:." << std::endl;
}
