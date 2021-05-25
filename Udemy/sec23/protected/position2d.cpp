#include "position2d.hpp"

/*
** init():座標の初期化 を実行
*/
void	Position2D::resetPosition()
{
	init();
}

void	Position2D::move(int dx, int dy)
{
	m_x += dx;
	m_y += dy;
}