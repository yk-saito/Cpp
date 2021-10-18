/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 13:48:26 by ysaito            #+#    #+#             */
/*   Updated: 2021/10/18 14:18:32 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>
#include <vector>

template <typename T>
typename std::vector<T>::iterator	easyfind(const std::vector<T> vector , const int element)
{
	std::vector<T>::iterator	iterator;

	iterator = std::find(vector.begin(), vector.end(), element);
	if (iterator == vector.end())
	{
		throw ("easyfind(): Not found element.");
	}
}

#endif
