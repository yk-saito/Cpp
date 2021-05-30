/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 15:48:53 by ysaito            #+#    #+#             */
/*   Updated: 2021/05/30 16:45:53 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CONTACT_HPP_
# define _CONTACT_HPP_

# include <string>

class Contact
{
private:
	int			m_index;
	static int	m_count;
	Contact();
	~Contact();
	// static int	getCount();
	std::string	m_first_name;
	std::string	m_last_name;
	std::string	m_nickname;
	std::string	m_login;
	std::string	m_postal_address;
	std::string	m_email_address;
	std::string	m_phone_number;
	//std::string	m_birthday_date;
	// std::string	m_favorite_meal;
	// std::string	m_underwear_color;
	// std::string	m_darkest_secret;
public:
	void	setFirstName(std::string first_name);
	void	getFirstName();
	void	setLastName(std::string last_name);
	void	getLastName();
	void	setNickName(std::string nich_name);
	void	getNickName();
	void	setLogin(std::string login);
	void	getLogin();
	void	setPostalAddress(std::string postal_adddrerss);
	void	getPostalAddress();
	void	setEmailAddress(std::string email_address);
	void	getEmailAddress();
	void	setPhoneNumber(std::string phone_number);
	void	getPhoneNumber();
};

Contact::Contact(/* args */) : m_index(0)
{
	m_index = m_count;
	m_count++;
}

Contact::~Contact()
{
}

#endif // _CONTACT_HPP_