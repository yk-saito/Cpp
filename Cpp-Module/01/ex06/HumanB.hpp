/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 20:28:04 by ysaito            #+#    #+#             */
/*   Updated: 2021/06/16 20:31:43 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HUMANB_HPP_
# define _HUMANB_HPP_

# include "Weapon.hpp"
# include <string>

class HumanB : public Weapon {
private:
	std::string m_name;
	Weapon		*m_CWeapon;
public:
	HumanB();
	HumanB(std::string name);
	~HumanB();
	void	setWeapon(Weapon& weapon);
	void	attack();
};

#endif // _HUMANB_HPP_