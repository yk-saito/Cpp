/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 17:22:20 by ysaito            #+#    #+#             */
/*   Updated: 2021/06/04 19:51:23 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BRAIN_HPP_
# define _BRAIN_HPP_

# include <string>

class Brain {
private:

public:
	Brain(void);
	~Brain(void);
	Brain	*identify(void);
};

#endif // _BRAIN_HPP_
