/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 16:36:19 by ysaito            #+#    #+#             */
/*   Updated: 2021/09/16 10:28:58 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <time.h>
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
	: Form("RobotomyRequestForm", "None", 72, 45)
{}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
	: Form("RobotomyRequestForm", target, 72, 45)
{}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other)
{
	*this = other;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
	if (this != &other) {}
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	Form::isExecute(executor);

	srand((unsigned int)time(NULL));
	int	rand_num = rand() % 2;

	switch (rand_num)
	{
		case 0:
			std::cout << "Robotomized Successfully. Rizzz Rizzz Rizzz ..." << std::endl;
			break;
		case 1:
			std::cout << "Robotomized unsuccessfully." << std::endl;
			break;
		default:
			std::cout << "Error rand() ...!!!" << std::endl;
			break;
	}
}
