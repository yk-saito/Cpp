#include <iostream>

int	main(void)
{
	int	input_digit;

	std::cout << "数値を入力してください: ";
	std::cin >> input_digit;
	std::cout << input_digit << "を2倍した数は、" << input_digit * 2 << "です。" << std::endl;
	return (0);
}