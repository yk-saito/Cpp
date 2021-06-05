/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 22:05:24 by ysaito            #+#    #+#             */
/*   Updated: 2021/06/05 16:50:08 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ZOMBIE_HPP_
# define _ZOMBIE_HPP_

# include <string>

class Zombie {
private:
	std::string	m_name;
	std::string	m_type;
public:
	Zombie();
	Zombie(std::string name,  std::string type);
	~Zombie();
	void	setName(const char *name);
	void	announce();
};

#endif // _ZOMBIE_HPP_