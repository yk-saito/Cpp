/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 19:28:34 by ysaito            #+#    #+#             */
/*   Updated: 2021/07/10 19:46:36 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

# include <string>

enum Levels {
	DEBUG,
	INFO,
	WARNING,
	ERROR
};

class Karen {
private:
	void		debug(void);
	void		info(void);
	void		warning(void);
	void		error(void);
	void		none(void);
	static const	std::string	Levels[4];
public:
	Karen();
	~Karen();
	void	complain(std::string level);
};

#endif
