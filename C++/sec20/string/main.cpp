#include <iostream>
#include <string>

using namespace	std;

int	main(void)
{
	string str;

	str = "This is a";
	str.append(" pen.");
	cout << str << endl;
	cout << "文字列の長さ：" << str.length() << endl;

	printf("char*:%s\n", str.c_str());
	return (0);
}