/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 20:32:37 by ysaito            #+#    #+#             */
/*   Updated: 2021/08/20 19:40:21 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
public:
	Fixed();
	Fixed(const Fixed& other);
	Fixed&	operator=(const Fixed& other);
 	~Fixed();
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
private:
	int					fixed_point_val_;
	static const int	fractional_bits_;
};

#endif
