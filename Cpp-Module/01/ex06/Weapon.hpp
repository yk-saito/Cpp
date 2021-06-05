/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 20:05:02 by ysaito            #+#    #+#             */
/*   Updated: 2021/06/05 16:51:23 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WEAPON_HPP_
# define _WEAPON_HPP_

# include  <string>

class Weapon {
private:
	const std::string	*m_type;
public:
	Weapon();
	Weapon(const std::string& type);
	~Weapon();
	void		setType(const std::string& type);
	std::string	getType(void);
};

#endif // _WEAPON_HPP_
