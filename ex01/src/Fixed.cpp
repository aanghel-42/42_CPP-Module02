/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanghel <aanghel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 01:43:36 by aanghel           #+#    #+#             */
/*   Updated: 2023/01/19 02:00:17 by aanghel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called\n";
	this->fixed_point = 0;
}

Fixed::Fixed(const int num): fixed_point(num << fractional_bits)
{
	std::cout << "Int costructor called" << std::endl;	
}

Fixed::Fixed(const float num): fixed_point(std::roundf(num * (1 << fractional_bits)))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& copy)
{
	std::cout << "Copy constructor called\n";
	this->fixed_point = copy.fixed_point;
}

Fixed& Fixed::operator=(const Fixed& copy)
{
    std::cout << "Copy assignment operator called\n";
    if (this != &copy)
        this->fixed_point = copy.getRawBits();
    return (*this);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called\n";
}

int Fixed::getRawBits( void ) const
{
    return (this->fixed_point);
}

void Fixed::setRawBits( int const raw )
{
    this->fixed_point = raw;
}

float   Fixed::toFloat( void ) const 
{
    return static_cast<float>(this->getRawBits()) / (1 << fractional_bits);
}

int     Fixed::toInt(void) const 
{
    return (this->fixed_point >> this->fractional_bits);
}

std::ostream & operator<<( std::ostream & o, Fixed const & i ) 
{
    o << i.toFloat();
    return o;
}