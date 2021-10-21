/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 13:48:26 by ysaito            #+#    #+#             */
/*   Updated: 2021/10/21 22:16:35 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <exception>
#include <vector>

class NotFoundException : public std::exception {
	virtual const char* what() const throw() {
		return ("Not found parameter...");
	}
};

template <typename T>
void	easyfind(const std::vector<T>& vector , const int parameter)
{
	typename std::vector<T>::size_type	index;

	for (index = 0; index < vector.size(); index++)
	{
		if (vector[index] == parameter)
		{
			std::cout << "Found first parameter! vector["
					  << index << "] = "
					  << vector[index] << std::endl;
			return ;
		}
	}
	throw (NotFoundException());
}

#endif /* EASYFIND_HPP */
