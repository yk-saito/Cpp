/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 17:04:57 by ysaito            #+#    #+#             */
/*   Updated: 2021/10/21 16:06:34 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template <typename T>
void	swap(T& left, T& right)
{
	T	tmp(left);

	left = right;
	right = tmp;
}

template <typename T>
const T&	min(const T& left, const T& right)
{
	if (left < right)
		return (left);
	return (right);
}

template <typename T>
const T&	max(const T& left, const T& right)
{
	if (left > right)
		return (left);
	return (right);
}

#endif /* WHATEVER_HPP */
