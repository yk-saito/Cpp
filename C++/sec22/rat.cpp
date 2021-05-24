#include "rat.h"
#include <iostream>

/*
** ネズミの数の初期値を0に設定
*/
int	CRat::m_count = 0;

/*
** コンストラクタ
*/
CRat::CRat() : m_id(0)
{
	m_id = m_count;
	m_count++;
}

/*
** デストラクタ
*/
CRat::~CRat()
{
	std::cout << "ネズミ" << m_id << "消去" << std::endl;
	m_count--;
}

/*
** ネズミの数を出力
*/
void	CRat::showNum()
{
	std::cout << "現在のネズミの数は、" << m_count << "匹です。" << std::endl;
}

/*
** ネズミの泣き声を出力
*/
void	CRat::squeak()
{
	std::cout << m_id << "チューチュー" << std::endl;
}