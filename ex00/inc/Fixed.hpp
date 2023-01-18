/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanghel <aanghel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 00:25:51 by aanghel           #+#    #+#             */
/*   Updated: 2023/01/19 00:39:11 by aanghel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	private:
		int fixed_point;
		static const int fractional_bits = 8;

	public:
		Fixed();
		Fixed(const Fixed& copy);
		Fixed& operator = (const Fixed& copy);
		~Fixed();

		int getRawBits(void)const;
		void setRawBits(int const raw);
	
};

#endif