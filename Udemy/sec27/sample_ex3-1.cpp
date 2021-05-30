#include <iostream>
#include <string>

template <typename T>

T	add(T x, T y)
{
	return (x + y);
}

int	main(void)
{
	std::cout << add<int>(1, 3) << std::endl;
	std::cout << add<std::string>("Hello", " World") << std::endl;	//stringの場合、型<string>を明記しないとエラー(stringなのかcharの配列なのか、プログラム側が判断できないため)
	std::cout << add(2, 10) << std::endl;	// 数値は型の明記不要
	std::cout << add(1.5, 3.2) << std::endl;
	return (0);
}