/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 17:10:02 by ysaito            #+#    #+#             */
/*   Updated: 2021/08/23 17:57:51 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>

class ClapTrap
{
public:
	ClapTrap(std::string name);
	virtual ~ClapTrap();
	virtual void	attack(std::string const & target);
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);
protected:
	std::string		name_;
	unsigned int	hitpoints_;
	unsigned int	energy_points_;
	unsigned int	attack_damage_;
	unsigned int	max_hitpoints_;
};

#endif //CLAPTRAP_HPP