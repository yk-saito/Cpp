/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 17:40:40 by ysaito            #+#    #+#             */
/*   Updated: 2021/09/16 15:42:07 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern()  {}

Intern::Intern(const Intern &other)
{
	*this = other;
}

Intern &Intern::operator=(const Intern &other)
{
	if (this != &other) {}
	return (*this);
}

Intern::~Intern() {}

Form	*makePresidentialForm(std::string form_target)
{
	return (new PresidentialPardonForm(form_target));
}

Form	*makeRobotomyForm(std::string form_taget)
{
	return (new RobotomyRequestForm(form_taget));
}

Form	*makeShrubberForm(std::string form_target)
{
	return (new ShrubberyCreationForm(form_target));
}

const std::string form_names_[3] = {
	"presidential pardon",
	"robotomy request",
	"shrubbery criation"
};

Form	*(* const class_func[3])(std::string) = {
	makePresidentialForm,
	makeRobotomyForm,
	makeShrubberForm
};

Form	*Intern::makeForm(std::string form_name, std::string form_target)
{
	for (int index = 0; index < 3; index++)
	{
		if (form_names_[index] == form_name)
		{
			Form *new_form = class_func[index](form_target);
			std::cout << "Intern creates " << new_form->getName() << std::endl;
			return (new_form);
		}
	}
	std::cout << "[Error]: Requested form is not known..." << std::endl;
	return (NULL);
}
