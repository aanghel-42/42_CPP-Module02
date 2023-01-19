/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanghel <aanghel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 01:47:59 by aanghel           #+#    #+#             */
/*   Updated: 2023/01/19 01:57:53 by aanghel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int					fixed_point;
		static const int	fractional_bits = 8;
	
	public:
		Fixed();
		Fixed(const int num);
		Fixed(const float num);
		Fixed(const Fixed& copy);
		Fixed& operator=(const Fixed& copy);
		~Fixed();

		int		toInt(void)const;
		int 	getRawBits(void)const;
		void	setRawBits(int const raw);
		float	toFloat(void)const;
};

std::ostream & operator<<(std::ostream & o, Fixed const & i);

#endif