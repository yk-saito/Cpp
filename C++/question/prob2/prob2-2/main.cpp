#include <iostream>
#include "min_max.h"

using namespace std;

int	main(void)
{
	MinMax m;

	int a = 4;
	int b = 2;
	int c = 7;
	cout << a << "と" << b << "と" << c << "のうち、最大のものは" << m.max(a, b, c) << endl;
	cout << a << "と" << b << "と" << c << "のうち、最小のものは" << m.min(a, b, c) << endl;
	return (0);
}