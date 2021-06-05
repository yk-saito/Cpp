#include "IntArray.hpp"
#include <iostream>

void	Viss(int num)
{
	std::cout << "Viss : No." << num << std::endl;
}

void	Show(IntArray array)
{
	Viss(2);
	for (int i = 0; i < array.Size(); ++i)
	{
		std::cout << array.Get(i) << ' ';
	}
	std::cout << std::endl;
	Viss(3);
}

int	main(void)
{
	IntArray	array0to9(10);

	for (int i = 0; i < array0to9.Size(), ++i)
	{
		array0to9.Set(i, i);
	}
	Viss(1);
	Show(array0to9);
	Viss(4);
}