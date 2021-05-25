#ifndef _CALCULATION_H_
# define _CALCULATION_H_

class	Calculation
{
	private:
		int	m_number1;
		int	m_number2;
	public:
		void	setNumber1(int num1);
		void	setNumber2(int num2);
		int		getNumber1(void);
		int		getNumber2(void);
		int		add(void);
		int		sub(void);
};

#endif