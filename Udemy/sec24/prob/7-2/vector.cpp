#include "vector.hpp"

//  デフォルトコンストラクタ
Vector::Vector() : m_x(0), m_y(0)
{
}

/*
** コンストラクタ
** 与えた引数を、m_x、m_yに代入
*/
Vector::Vector(double add_x, double add_y)
{
	m_x += add_x;
	m_y += add_y;
}

//  成分の設定
void Vector::set(double x, double y)
{
    m_x = x;
    m_y = y;
}
//  x成分の取得
double Vector::getX()
{
    return m_x;
}
//  y成分の取得
double Vector::getY()
{
    return m_y;
}