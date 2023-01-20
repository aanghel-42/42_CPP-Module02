
#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

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

		//comparison operators:
		bool	operator>(const Fixed & obj) const;
		bool	operator<(const Fixed & obj) const;
		bool	operator>=(const Fixed & obj) const;
		bool	operator<=(const Fixed & obj) const;
		bool	operator==(const Fixed & obj) const;
		bool	operator!=(const Fixed & obj) const;

		//arithmetic operators:
		Fixed	operator+(const Fixed & obj);
		Fixed	operator-(const Fixed & obj);
		Fixed	operator*(const Fixed & obj);
		Fixed	operator/(const Fixed & obj);

		//increment/decrement:
		Fixed	operator++(int); //post
		Fixed	operator--(int); //post
		Fixed	&operator++();  //pre
		Fixed	&operator--();  //pre
		

		//min and max
		static Fixed const &min(Fixed const &obj1, Fixed const &obj2);
		static Fixed const &max(Fixed const &obj1, Fixed const &obj2);
		static Fixed &min(Fixed &obj1, Fixed &obj2);
		static Fixed &max(Fixed &obj1, Fixed &obj2);

		int		toInt(void)const;
		int 	getRawBits(void)const;
		void	setRawBits(int const raw);
		float	toFloat(void)const;
};

std::ostream & operator<<(std::ostream & o, Fixed const & i);

#endif