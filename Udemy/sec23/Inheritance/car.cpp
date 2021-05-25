#include "car.hpp"
#include <iostream>

CCar::CCar() : m_fuel(0), m_migration(0)
{
	std::cout << "CCarオブジェクト生成" << std::endl;
}

CCar::~CCar()
{
	std::cout << "CCarオブジェクト破棄" << std::endl;
}

/*
** 移動メソッド
*/
void	CCar::move()
{
	if (m_fuel >= 0)
	{
		m_migration++;
		m_fuel--;
	}
	std::cout << "移動距離: " << m_migration << std::endl;
	std::cout << "残りの燃料: " << m_fuel << std::endl;
}

void	CCar::supply(int fuel)
{
	if (fuel > 0)
	{
		m_fuel += fuel;
	}
	std::cout << "補給した燃料: " << m_fuel << std::endl;
}