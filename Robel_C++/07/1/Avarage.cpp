#include <iostream>

using namespace  std;

/*
	入力関数
**	０以上の値が入力されたら true を、
**	負の値が入力されたらfalseを返す。
*/
bool	Input(double& n)
{
	cin >> n;
	return (n >= 0);
}

/*
	入力を受け取って平均値を求め、その値を出力する関数。
**	要素数が０の場合は何も出力せず、false を返す。
*/
bool	Average()
{
	int		count;
	double	n;
	double	avr;

	for (count = 0; Input(n); ++count)
	{
		avr += n;
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
	while (Average())
	{
		// do nothing
	}
}