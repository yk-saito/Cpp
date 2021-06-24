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

class Contact {
private:
	bool		m_entered_flag;
	std::string	m_first_name;
	std::string	m_last_name;
	std::string	m_nickname;
	std::string	m_login;
	std::string	m_postal_addr;
	std::string	m_email_addr;
	std::string	m_phone_number;
	std::string	m_birthday_date;
	std::string	m_favorite_meal;
	std::string	m_underwear_color;
	std::string	m_darkest_secret;
public:
	Contact();
	~Contact();
	void		clearInput();
	void		setEnteredFlag();
	bool		getEnteredFlag();
	void		setFirstName(std::string first_name);
	std::string	getFirstName();
	void		setLastName(std::string last_name);
	std::string	getLastName();
	void		setNickname(std::string nick_name);
	std::string	getNickname();
	void		setLogin(std::string login);
	std::string	getLogin();
	void		setPostalAddr(std::string postal_addr);
	std::string	getPostalAddr();
	void		setEmailAddr(std::string email_addr);
	std::string	getEmailAddr();
	void		setPhoneNumber(std::string phone_number);
	std::string	getPhoneNumber();
	void		setBirthday(std::string birthday);
	std::string	getBirthday();
	void		setFavoriteMeal(std::string favorite_meal);
	std::string	getFavoriteMeal();
	void		setUnderwearColor(std::string underwear_color);
	std::string	getUnderwearColor();
	void		setSecret(std::string secret);
	std::string	getSecret();
	void		setContact(Contact *contact);
	void		displayList(Contact contact, int index);
	void		displayContact(Contact contact);
};

#endif // _CONTACT_HPP_