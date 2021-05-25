#include <iostream>

int	main(void)
{
	int	*p = 0;

	p = new int();	// int型の領域を動的確保
	*p = 123;
	std::cout << *p << std::endl;
	delete p;		// newで動的に確保した領域を解放
	return (0);
}