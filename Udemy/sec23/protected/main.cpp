#include "position2d.hpp"
#include <iostream>

int	main(void)
{
	Position2D	p;
	p.setValue(1, 1);
	p.move(2, 3);
	std::cout << "p:(" << p.getX() << ", " << p.getY() << ")" << std::endl;
	p.resetPosition();
	std::cout << "p:(" << p.getX() << ", " << p.getY() << ")" << std::endl;
	return (0);
}