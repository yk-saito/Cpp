/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 21:40:09 by ysaito            #+#    #+#             */
/*   Updated: 2021/06/25 19:56:05 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class Weapon {
private:
	std::string	m_type;
public:
	Weapon();
	Weapon(std::string type);
	~Weapon();
	void				setType(std::string type);
	const std::string&	getType(void);
};

#endif
