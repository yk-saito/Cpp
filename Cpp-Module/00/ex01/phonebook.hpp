/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 15:48:53 by ysaito            #+#    #+#             */
/*   Updated: 2021/05/25 16:20:59 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _PHONEBOOK_HPP_
# define _PHONEBOOK_HPP_

class Phonebook
{
private:
	/* data */
	int	m_index;
	static int	m_count;
public:
	Phonebook(/* args */);
	~Phonebook();
	static int	getCount();
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	login;
	std::string	postal_address;
	std::string	email_address;
	std::string	phone_number;
	std::string	birthday_date;
	std::string	favorite_meal;
	std::string	underwear_color;
	std::string	darkest_secret;
};

Phonebook::Phonebook(/* args */) : m_index(0)
{
	m_index = m_count;
	m_count++;
}

Phonebook::~Phonebook()
{
}

#endif /* _PHONEBOOK_HPP_ */