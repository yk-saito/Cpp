#include <iostream>

struct	DData
{
	int		n;
	double	d;
};

int	main(void)
{
	DData	dt;

	dt.n = 100;
	dt.d = 12.34;
	std::cout << "dt.n = " << dt.n << std::endl << "dt.d = " << dt.d << std::endl;

	return (0);
}