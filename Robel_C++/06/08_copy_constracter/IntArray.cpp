#include "IntArray.hpp"
#include <iostream>
#include <algorithm> // copy

IntArray::IntArray(int	size)
{
	m_array = new int[size];
	m_size = size;

	std::cout << "コンストラクタが呼ばれました。"
				<< "要素数は　" << m_size << " です。" << std::endl;
}

IntArray::IntArray(const IntArray& other)
{
	copy(other.m_array, other.m_array + m_size, m_array);

	std::cout << "コピーコンストラクタが呼ばれました。" << std::endl;
}

IntArray::~IntArray()
{
	delete[] m_array;
}

int	IntArray::Get(int i)
{
	CheckIndex(i);
	return (m_array[i]);
}

void	IntArray::Set(int i, int value)
{
	CheckIndex(i);
	m_array[i] = value;
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