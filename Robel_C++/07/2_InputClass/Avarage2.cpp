#include "InputStream.hpp"
#include <iostream>

using namespace  std;

/*
	入力を受け取って平均値を求め、その値を出力する関数。
**	要素数が０の場合は何も出力せず、false を返す。
*/
bool	Average(InputStream stream)
{
	int		count;
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
	while (true)
	{
		InputStream	stream;
		if (! Average(stream))
		{
			break ;
		}
	}
}