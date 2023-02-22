#include "../inc/Point.hpp"

Point::Point() : x(0), y(0){}

Point::~Point(){}

Point::Point(Fixed const &x, Fixed const &y) : x(x), y(y) {}

Point::Point(const Point &elem) : x(elem.x), y(elem.y){}

Point &Point::operator=(Point const &elem)
{
	std::cerr << "Error: assignement not worked" << std::endl;
	(void)elem;
	return (*this);
}

Fixed Point::getX()
{
	return (x);
}

Fixed Point::getY()
{
	return (y);
}