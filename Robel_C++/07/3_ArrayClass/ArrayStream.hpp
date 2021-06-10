#ifndef _ARRAYSTREAM_HPP_
# define _ARRAYSTREAM_HPP_

/*
	配列から順に値を取得していくクラス
*/
class ArrayStream {
private:
	const double	*m_array;
	int				m_i;	// 現在のインデックス
	double			m_n;	// 現在の値
public:
	ArrayStream(/* args */);
	ArrayStream(const double *array);
	~ArrayStream();
	double	Get() const; 	// 設定された値を取得
	bool	Set();			// 新しい値を設定
};

#endif // _ARRAYSTREAM_HPP_