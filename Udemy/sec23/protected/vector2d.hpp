#ifndef _VECTOR2D_HPP_
# define _VECTOR2D_HPP_

class Vector2D
{
protected:
	int	m_x;
	int	m_y;
public:
	Vector2D();
	void	setValue(int x, int y);
	int		getX();
	int		getY();
protected:
	void	init();	// 初期化
};

#endif /* _VECTOR2D_HPP_ */