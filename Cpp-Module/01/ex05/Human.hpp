/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 17:22:47 by ysaito            #+#    #+#             */
/*   Updated: 2021/06/04 19:52:01 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HUMAN_HPP_
# define _HUMAN_HPP_

# include "Brain.hpp"
# include <string>

class Human : public Brain {
private:

public:
	Human(void);
	~Human(void);
	Brain	*identify(void);
	Brain 	getBrain(void);
};

#endif  // _HUMAN_HPP_
