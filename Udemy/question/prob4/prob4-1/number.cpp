#include <iostream>
#include "number.h"

Number::Number(void) : a(0), b(0)
{
	//std::cout << "インスタンス初期化" << std::endl;
}

Number::~Number(void)
{
	//std::cout << "インスタンス消去" << std::endl;
}

//  二つの数値を設定
void Number::setNumbers(int n1, int n2)
{
	a = n1;
	b = n2;
}

int Number::getAdd()
{
	return a + b;
}