/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 17:14:31 by ysaito            #+#    #+#             */
/*   Updated: 2021/07/05 17:16:59 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed {

private:
	int					m_fixed_value;
	static const int	m_bits;
public:
	Fixed(); //  initializes the fixed point value to 0.
	Fixed(const Fixed& other); // copy constructor
 	~Fixed();
	void	operator=(const Fixed& other);// assignation operator overload
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif
