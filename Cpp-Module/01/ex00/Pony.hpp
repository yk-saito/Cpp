/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 17:32:10 by ysaito            #+#    #+#             */
/*   Updated: 2021/06/01 21:23:07 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _PONY_HPP_
# define _PONY_HPP_

# include <string>

class Pony
{
private:
	/* data */
	std::string m_name;
public:
	Pony(/* args */);
	~Pony();
	void		setName(std::string name);
	std::string	getName();
};

#endif // _PONY_HPP_
