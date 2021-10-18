/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 17:40:11 by ysaito            #+#    #+#             */
/*   Updated: 2021/09/15 21:49:56 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include <string>

#include "Form.hpp"

enum Forms {
	PRESIDENTIAL,
	ROBOTOMY,
	SHRUBBERY
};

class Intern
{
public:
	Intern();
	Intern(const Intern &other);
	Intern &operator=(const Intern &other);
	~Intern();
	Form	*makeForm(std::string form_name, std::string form_target);
};

#endif
