#include <iostream>

int	main(void)
{
	int	num_a;
	int	num_b;

	std::cout << "数値を2つ入力してください" << std::endl;
	std::cout << "1つ目の数: ";
	std::cin >>  num_a;
	std::cout << "2つ目の数: ";
	std::cin >> num_b;
	std::cout << num_a << " + " << num_b << " = " << num_a + num_b << std::endl;
	std::cout << num_a << " - " << num_b << " = " << num_a - num_b << std::endl;
	return (0);
}