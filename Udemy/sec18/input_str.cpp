#include <iostream>
#include <string>

//using namespace std; これつけるなら,std::は全ていらない

int	main(void)
{
	std::string	str;
	std::string	t;

	t = "The entered character string is ";
	std::cout << "Please enter some string." << std::endl << ">> ";
	std::cin >> str;
	std::cout << t + str << "." << std::endl;
	return (0);
}