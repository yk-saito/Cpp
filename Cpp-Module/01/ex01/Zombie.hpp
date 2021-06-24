/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 13:48:45 by ysaito            #+#    #+#             */
/*   Updated: 2021/06/24 18:13:07 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

class Zombie {
private:
	std::string	m_name;
public:
	Zombie();
	Zombie(std::string name);
	~Zombie();
	void	setName(std::string name);
	void	announce();
};

Zombie* zombieHorde(int N, std::string name);

#endif