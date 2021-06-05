/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 18:23:45 by ysaito            #+#    #+#             */
/*   Updated: 2021/06/05 15:50:02 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ZOMBIEHORDE_HPP_
# define _ZOMBIEHORDE_HPP_

# include "Zombie.hpp"

class ZombieHorde : public Zombie {
private:
	Zombie		*m_zombies;
	int			m_zombies_num;
public:
	ZombieHorde();
	ZombieHorde(int N);
	~ZombieHorde();
	int		createRandomNum();
	void	setRandomName();
	void	announce();
};

#endif // _ZOMBIEHORDE_HPP_