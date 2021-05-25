#include "vector2d.hpp"

/*
** コンストラクタ
*/
Vector2D::Vector2D()
{
	init();
}

/*
** 値の設定
*/
void	Vector2D::setValue(int x, int y)
{
	m_x = x;
	m_y = y;
}

int		Vector2D::getX()
{
	return (m_x);
}

int		Vector2D::getY()
{
	return (m_y);
}

/*
** 座標の初期化
*/
void	Vector2D::init()
{
	m_x = 0;
	m_y = 0;
}