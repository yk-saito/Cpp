#include "ArrayStream.hpp"
#include <iostream>

using namespace  std;

/*
	入力を受け取って平均値を求め、その値を出力する関数。
**	要素数が０の場合は何も出力せず、false を返す。
*/
bool	Average(ArrayStream stream)
{
	int		count;
	double	n;
	double	avr;

	for (count = 0; stream.Set(); ++count)
	{
		avr += stream.Get();
	}
	if (count == 0)
	{
		return (false);
	}
	avr /= count;
	cout  << "平均値は " << avr << " です。" << endl;
	return (true);
}

int	main(void)
{
	static const double	ARRAY1[] = {1, 2, 3, -1};
	static const double ARRAY2[] = {0.5, 1.5, -1};
	static const double ARRAY3[] = {-1};
	static const double *const ARRAY[] =  {ARRAY1, ARRAY2, ARRAY3};
	static const int SIZE = sizeof ARRAY / sizeof *ARRAY;

	// while (true)
	// {
	// 	InputStream	stream;
	// 	if (! Average(stream))
	// 	{
	// 		break ;
	// 	}
	// }
	for (int i = 0; i < SIZE; ++i)
	{
		ArrayStream	stream(ARRAY[i]);
		if (! Average(stream))
			break ;
	}
}