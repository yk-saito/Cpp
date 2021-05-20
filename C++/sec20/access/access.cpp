#include <iostream>
#include "access.h"

using namespace	std;

void	Access::func1()
{
	cout << "func1" << endl;
	a = 10;
	b = 10;
	func2();
}

void	Access::func2()
{
	a = 2;
	b = 2;
	cout << "a=" << a << "," << "b=" << b << endl;
}