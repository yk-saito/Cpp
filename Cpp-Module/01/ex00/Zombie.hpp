/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 13:48:45 by ysaito            #+#    #+#             */
/*   Updated: 2021/06/24 17:39:34 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

class Zombie {
private:
	std::string	m_name;
public:
	Zombie(std::string name);
	~Zombie();
	void	announce();
};

Zombie* newZombie(std::string name);
void	randomChump(std::string name);

#endif