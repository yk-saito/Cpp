/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 13:29:23 by ysaito            #+#    #+#             */
/*   Updated: 2021/06/19 20:01:22 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _PHONEBOOK_HPP_
# define _PHONEBOOK_HPP_

# include "contact.hpp"

class Phonebook {
private:
	int		m_count;
public:
	Phonebook();
	~Phonebook();
	void	setCount();
	int		getCount();
	void	clearCommand();
	void	commandAdd(Contact *contact);
	void	commandSearch(Contact *contact);
	void	commandError();
};

#endif // _PHONEBOOK_HPP_