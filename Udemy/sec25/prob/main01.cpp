#include <iostream>

void swap(int &num_a, int &num_b)
{
	int tmp;
	tmp = num_a;
	num_a = num_b;
	num_b = tmp;
}

int main()
{
	int	a = 1;
	int	b = 2;
	std::cout << "a = " << a << " b = " << b << std::endl;
	swap(a, b);
	std::cout << "a = " << a << " b = " << b << std::endl;
	return 0;
}
