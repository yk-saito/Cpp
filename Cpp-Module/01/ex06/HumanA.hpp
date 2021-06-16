/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 20:09:48 by ysaito            #+#    #+#             */
/*   Updated: 2021/06/16 18:07:40 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HUMANA_HPP_
# define _HUMANA_HPP_

# include "Weapon.hpp"

class  HumanA : public Weapon {
private:
	std::string	m_name;
	//Weapon		m_weapon;
	const std::string	*m_weapon;
public:
	HumanA();
	HumanA(std::string name, Weapon& weapon);
	~HumanA();
	void	attack(void);
};

#endif //_HUMANA_HPP_
