#include "calculation.h"

void	Calculation::setNumber1(int num1)
{
	m_number1 = num1;
}

void	Calculation::setNumber2(int num2)
{
	m_number2 = num2;
}

int		Calculation::getNumber1(void)
{
	return (m_number1);
}

int		Calculation::getNumber2(void)
{
	return (m_number2);
}

int		Calculation::add(void)
{
	return (m_number1 + m_number2);
}

int		Calculation::sub(void)
{
	return (m_number1 - m_number2);
}