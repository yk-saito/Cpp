/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 18:19:30 by ysaito            #+#    #+#             */
/*   Updated: 2021/06/03 18:23:34 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ZOMBIE_HPP_
# define _ZOMBIE_HPP_

# include <string>

class Zombie
{
private:
	std::string	m_name;
	std::string	m_type;
public:
	Zombie();
	Zombie(std::string name);
	~Zombie();
	void	announce();
};

#endif // _ZOMBIE_HPP_