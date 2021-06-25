/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 08:52:45 by ysaito            #+#    #+#             */
/*   Updated: 2021/06/25 20:04:34 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA {
private:
	std::string	m_name;
	Weapon		*m_CWeapon;
public:
	HumanA();
	HumanA(std::string name, Weapon& weapon);
	~HumanA();
	void	attack();
};

#endif
