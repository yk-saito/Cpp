#include "IntArray.hpp"
#include <iostream>
#include <algorithm> // copy

IntArray::IntArray(int	size)
{
	m_array = new int[size];
	m_size = size;

	std::cout << "コンストラクタが呼ばれました。"
				<< "要素数は " << m_size << " です。" << std::endl;
}

/*
	コピーコンストラクタ
**	仮引数が作成される時に呼ばれる。
*/
IntArray::IntArray(const IntArray& other)
{
	m_array = new int[other.m_size];
	m_size = other.m_size;

	//copyはメモリの内容をコピーする関数のようなもの。
	std::copy(other.m_array, other.m_array + m_size, m_array);
	std::cout << "コピーコンストラクタが呼ばれました。" << std::endl;
}

IntArray::~IntArray()
{
	delete[] m_array;

	std::cout << "デストラクタが呼ばれました。"
			  << "要素数は " << m_size << " でした。" << std::endl;
}

int	IntArray::GetValue(int i)
{
	CheckIndex(i);
	return (m_array[i]);
}

void	IntArray::SetValue(int i, int value)
{
	CheckIndex(i);
	m_array[i] = value;
}

int		IntArray::Size(void)
{
	return (m_size);
}

void	IntArray::CheckIndex(int i)
{
	if (0 <= i && i < m_size)
	{
		// インデックスは正常です
	}
	else
	{
		std::cout << "インデックスが不正です。" << std::endl
					<< "値：" << i << std::endl;
		exit(EXIT_FAILURE);
	}

}