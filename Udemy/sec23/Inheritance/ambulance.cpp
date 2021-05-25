#include "ambulance.hpp"
#include <iostream>

CAmbulance::CAmbulance() : m_number(119)
{
	std::cout << "CAmbulanceオブジェクト生成" << std::endl;
}

CAmbulance::~CAmbulance()
{
	std::cout << "CAmbulanceオブジェクト破棄" << std::endl;
}

void	CAmbulance::savePeople()
{
	std::cout << "救急救命活動" << std::endl << "呼び出しは" << m_number << "番" << std::endl;
}