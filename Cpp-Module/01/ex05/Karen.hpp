/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 19:23:07 by ysaito            #+#    #+#             */
/*   Updated: 2021/06/28 16:10:45 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

# include <string>

enum	Levels
{
	DEBUG,
	INFO,
	WARNING,
	ERROR
};

class Karen	{
private:
	static void	debug(void);
	static void	info(void);
	static void	warning(void);
	static void	error(void);
public:
	Karen();
	~Karen();
	void	complain(std::string level);
};

#endif
