#include <iostream>
#include "car.h"

int	main(void)
{
	CCar	*pC = 0;

	pC = new CCar();	// インスタンス生成
	pC->supply(10);
	pC->move();
	pC->move();
	delete pC;			// インスタンスの消去
	std::cout << "インスタンスの消去終了" << std::endl;
	return (0);
}