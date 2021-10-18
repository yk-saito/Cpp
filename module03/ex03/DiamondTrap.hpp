/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 17:48:36 by ysaito            #+#    #+#             */
/*   Updated: 2021/08/23 17:11:35 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <string>
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap :
	public FragTrap,
	public ScavTrap
{
public:
	DiamondTrap(std::string name);
	~DiamondTrap();
	virtual	void	attack(std::string const & target);
	void			whoAmI();
private:
	std::string		claptrap_name_;
};

#endif
