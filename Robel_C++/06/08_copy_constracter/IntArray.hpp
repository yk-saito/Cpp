#ifndef _INTARRAY_HPP_
# define _INTARRAY_HPP_

class IntArray {
private:
	int	*m_array;	// 動的配列
	int	m_size;		// 配列の要素数
public:
	IntArray(/* args */);
	IntArray(int size);
	IntArray(const IntArray& other);
	~IntArray();
	int		GetValue(int i);
	void	SetValue(int i, int value);
	int		Size(void);
	void	CheckIndex(int i);
};

#endif // _INTARRAY_HPP_