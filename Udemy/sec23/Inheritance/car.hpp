#ifndef _CAR_HPP_
# define _CAR_HPP_

#include <iostream>

class CCar
{
private:
	int	m_fuel;			// 燃料
	int	m_migration;	// 移動距離
public:
	CCar();
	virtual ~CCar();
	void	move();
	void	supply(int fuel);
};

// CCar::CCar() : m_fuel(0), m_migration(0)
// {
// 	std::cout << "CCarオブジェクト生成" << std::endl;
// }

// CCar::~CCar()
// {
// 	std::cout << "CCarオブジェクト破棄" << std::endl;
// }

#endif /* _CAR_HPP_ */