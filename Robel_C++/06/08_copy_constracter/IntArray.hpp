#ifndef _INTARRAY_HPP_
# define _INTARRAY_HPP_

class IntArray
{
private:
	int	*m_array;	// 動的配列
	int	m_size;		// 配列の要素数
public:
	IntArray(/* args */);
	IntArray(int size);
	IntArray(const IntArray& other);
	~IntArray();
	int		Get(int i);
	void	Set(int i, int value);
	void	CheckIndex(int i);
};

IntArray::IntArray(/* args */)
{
}

IntArray::~IntArray()
{
}


#endif // _INTARRAY_HPP_