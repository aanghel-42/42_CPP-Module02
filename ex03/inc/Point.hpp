#ifndef POINT_HPP
# define POINT_HPP

# include <iostream>
# include <cmath>
# include "Fixed.hpp"

class Point
{
	private:
		Fixed const x;
		Fixed const y;

	public:
		Point();
		~Point();
		Point(Fixed const &x, Fixed const &y);
		Point(Point const &elem);
		Point &operator=(Point const &elem);
		Fixed getX();
		Fixed getY();
};

bool bps(Point const a, Point const b, Point const c, Point const point);

#endif