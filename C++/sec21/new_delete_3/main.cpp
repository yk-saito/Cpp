#include <iostream>

int	main(void)
{
	int	*p;

	p = new int[10];	// int型10個分の領域を動的確保
	for (int i = 0; i < 10; i++)
	{
		p[i] = i;
		std::cout << p[i] << std::endl;
	}
	delete[] p;			// 動的に確保した領域を解放
	return (0);
}