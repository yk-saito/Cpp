#include "ArrayStream.hpp"
#include <iostream>

ArrayStream::ArrayStream(/* args */)
{
}

ArrayStream::~ArrayStream()
{
}

ArrayStream::ArrayStream(const double *array)
{
	m_array = array;
	//m_i = 0;
	std::cout << "m_iの初期値は " << m_i << std::endl;
}

double	ArrayStream::Get() const
{
	return (m_n);
}

bool	ArrayStream::Set()
{
	m_n = m_array[m_i];
	if (m_n >= 0)
	{
		++m_i;
		return (true);
	}
	else
	{
		return (false);
	}
}