#include "InputStream.hpp"
#include <iostream>

using namespace std;

InputStream::InputStream(/* args */)
{
}

InputStream::~InputStream()
{
}

/*
	設定された値を取得
*/
double	InputStream::getInput() const
{
	return  (m_num);
}

/*
	新しい値を設定
*/
bool	InputStream::setInput()
{
	cin >> m_num;
	return (m_num >= 0);
}