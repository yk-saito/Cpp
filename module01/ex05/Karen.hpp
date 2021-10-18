/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 19:28:34 by ysaito            #+#    #+#             */
/*   Updated: 2021/06/29 16:47:05 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

# include <string>

class Karen {
private:
	static void		debug(void);
	static void		info(void);
	static void		warning(void);
	static void		error(void);
	static const	std::string	Levels[4];
public:
	Karen();
	~Karen();
	void	complain(std::string level);
};

#endif
