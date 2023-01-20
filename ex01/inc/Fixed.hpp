
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
		~Fixed();

		Fixed& operator=(const Fixed& copy);

		int		toInt(void)const;
		int 	getRawBits(void)const;
		void	setRawBits(int const raw);
		float	toFloat(void)const;
};

std::ostream & operator<<(std::ostream & o, Fixed const & i);

#endif