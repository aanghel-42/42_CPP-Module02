
#include "../inc/Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor callen\n";
	this->fixed_point = 0;
}

Fixed::Fixed(const Fixed& copy)
{
	std::cout << "Copy constructor called\n";
	this->fixed_point = copy.fixed_point;
}

Fixed& Fixed::operator=(const Fixed& copy)
{
	std::cout << "Copy assignemnet operator called\n";
	if (this != &copy)
		this->fixed_point = copy.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Decostructor called\n";
} 

int Fixed::getRawBits(void)const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixed_point);
}

void Fixed::setRawBits(int const raw)
{
	this->fixed_point = raw;
}