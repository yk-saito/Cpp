#include <iostream>
#include <string>

int	main(void)
{
	std::string	first_name;
	std::string	last_name;

	std::cout << "姓を入力: ";
	std::cin >> last_name;
	std::cout << "名を入力: ";
	std::cin >> first_name;
	std::cout << "名前は「" << last_name + first_name << "」です。" << std::endl;
	return (0);
}