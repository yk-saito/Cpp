#include <iostream>

bool	judge(int num)
{
	if (num >= 0)
		return (true);
	else
		return (false);
}

int	main(void)
{
	int	input_num;

	std::cout << "整数を入力: ";
	std::cin >> input_num;
	if (judge(input_num))
	{
		std::cout << "この数は0以上です." << std::endl;
	}
	else
	{
		std::cout << "この数は0未満です." << std::endl;
	}
	return (0);
}
