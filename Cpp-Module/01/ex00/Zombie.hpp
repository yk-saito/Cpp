/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 13:48:45 by ysaito            #+#    #+#             */
/*   Updated: 2021/06/24 14:09:48 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

class Zombie {
private:
	std::string	m_name;
public:
	// Zombie();
	Zombie(std::string name);
	~Zombie();
	void	announce();
};

Zombie* newZombie(std::string name);
void	randomChump(std::string name);

#endif