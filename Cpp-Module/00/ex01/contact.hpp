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
# include <iostream>//del

class Contact
{
private:
	int			m_entered_flag;
	std::string	m_first_name;
	std::string	m_last_name;
	std::string	m_nickname;
	std::string	m_login;
	std::string	m_postal_addr;
	std::string	m_email_addr;
	std::string	m_phone_number;
public:
	Contact();
	~Contact();
	void		setEnteredFlag();
	int			getEnteredFlag();
	void		setFirstName(std::string input_first_name);
	std::string	getFirstName();
	void		setLastName(std::string input_last_name);
	std::string	getLastName();
	void		setNickname(std::string input_nick_name);
	std::string	getNickname();
	void		setLogin(std::string input_login);
	std::string	getLogin();
	void		setPostalAddr(std::string input_postal_addr);
	std::string	getPostalAddr();
	void		setEmailAddr(std::string input_email_addr);
	std::string	getEmailAddr();
	void		setPhoneNumber(std::string input_phone_number);
	std::string	getPhoneNumber();
};

#endif // _CONTACT_HPP_