#include "car.hpp"
#include "ambulance.hpp"

int	main(void)
{
	CCar	car;
	car.supply(10);	// 燃料補給
	car.move();
	CAmbulance	amb;
	amb.supply(20);
	amb.move();
	amb.savePeople();
	return (0);
}