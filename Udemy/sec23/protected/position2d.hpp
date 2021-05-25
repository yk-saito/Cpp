#ifndef _POSITION2D_HPP_
# define _POSITION2D_HPP_

# include "vector2d.hpp"

class Position2D : public Vector2D
{
	public:
		void	resetPosition();
		void	move(int dx, int dy);
};

#endif /* _POSITION2D_HPP_ */