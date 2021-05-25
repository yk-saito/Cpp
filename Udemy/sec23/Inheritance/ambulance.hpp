#ifndef _AMBULANCE_HPP_
# define _AMBULANCE_HPP_

# include "car.hpp"
# include <iostream>

class CAmbulance : public CCar // public [className] で、継承クラス（サブクラス)が作れる
{
private:
	int	m_number;
public:
	CAmbulance();
	virtual ~CAmbulance();
	void	savePeople();	//救急救命活動
};

// CAmbulance::CAmbulance() : m_number(119)
// {
// 	std::cout << "CAmbulanceオブジェクト生成" << std::endl;
// }

// CAmbulance::~CAmbulance()
// {
// 	std::cout << "CAmbulanceオブジェクト破棄" << std::endl;
// }


#endif /* _AMBULANCE_HPP_ */