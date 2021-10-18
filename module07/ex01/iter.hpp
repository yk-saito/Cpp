/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 19:24:30 by ysaito            #+#    #+#             */
/*   Updated: 2021/10/18 08:18:00 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template <typename T>
void	iter(T* array, const size_t length, void(*func)(T&))
{
	if (array == NULL || func == NULL)
		return ;
	for (size_t i = 0; i < length; i++)
	{
		func(array[i]);
	}
}

#endif /* ITER_HPP */
