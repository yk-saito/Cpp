/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 18:23:45 by ysaito            #+#    #+#             */
/*   Updated: 2021/06/04 15:50:09 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ZOMBIEHORDE_HPP_
# define _ZOMBIEHORDE_HPP_

# include "Zombie.hpp"

class ZombieHorde : public Zombie {
private:
	/* data */
public:
	ZombieHorde(/* args */);
	ZombieHorde(int N);
	~ZombieHorde();
	void	announce();
};

#endif // _ZOMBIEHORDE_HPP_