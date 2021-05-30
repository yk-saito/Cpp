#include <iostream>

void	changeNumber(int &num)
{
	num *= 2;
}

int	main(void)
{
	int	num;

	num = 5;
	std::cout << "変更前: " << num << std::endl;
	changeNumber(num);
	std::cout << "変更後: " << num << std::endl;
	return (0);
}