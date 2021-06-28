/*
#include <iostream>
#include <cassert>

// 配列のサイズを取得
#define ARRAY_SIZE(array) (sizeof(array) / sizeof *(arary));
// 四則演算をする関数
int	Add(int a, int b)
{
	return (a + b);
}
int	Sub(int a, int b)
{
	return (a - b);
}
// 四則演算をする関数をまとめた配列関数ポインタ
int	(*const FP_OPERATOR[])(int a, int b) = {
	Add, Sub
};


class Calculator
{
private:
	int		m_a;
	int		m_b;
	bool	Input(); // 二つの値を入力
	void	Calculate(); // 二つの値を演算
public:
	Calculator();
	~Calculator();
	void	Run();
};

// 二つの値を入力
bool	Calculator::Input()
{
	std::cout << "二つの値を入力してください > " << std::flush;
	m_b = 0; // 入力が変な場合は、 m_b が 0 から変更されず、falseを返す
	std::cin >> m_a >> m_b;
	return (m_b != 0);
}

// 二つの値を演算
void	Calculator::Calculate()
{
	static const size_t SIZE = ARRAY_SIZE(FP_OPERATOR);
	// assert = (SIZE == ARRAY_SIZE(OPERATION_NAME));

	for (size_t i = 0; i < SIZE; ++i)
	{
		int result = FP_OPERATOR[i](m_a, m_b);
		std::cout << "result: " << result << std::endl;
	}
}

Calculator::Calculator()
{
}
Calculator:: Calculator()
{
}

// 処理の実行
void	Calculator::Run()
{
	while (Input())
	{
		Calculate();
	}
}

int	main(void)
{
	Calculator calc;
	calc.Run();
}

*/

// FuncPtr1.cpp
#include <iostream>

double Add(double a, double b){ return a + b; }
double Sub(double a, double b){ return a - b; }
double Mul(double a, double b){ return a * b; }
double Div(double a, double b){ return a / b; }

double (* const afpOps[])(double, double) = {
    Add, Sub, Mul, Div,
};

enum EOperator
{
    ADD, SUB, MUL, DIV,
};

bool InputOp(EOperator& rfOp)
{
    char letter;

    std::cout << "演算子を指定して下さい > " << std::flush;
    std::cin >> letter;

    switch(letter)
    {
    case '+': rfOp = ADD; break;
    case '-': rfOp = SUB; break;
    case '*': rfOp = MUL; break;
    case '/': rfOp = DIV; break;
    default :      return false;
    }

    return true;
}

void InputVals(double& ra, double& rb)
{
    std::cout << "２つの数値を入力して下さい > " << std::flush;
    std::cin >> ra >> rb;
}

int main()
{
    static const char* s_apszOps[] = {" + ", " - ", " * ", " / ",};
    EOperator fOp;
    double     a, b;

    while(InputOp(fOp))
    {
        InputVals(a, b);

        std::cout << a << s_apszOps[fOp] << b << " = " << afpOps[fOp](a, b) << std::endl;
    }
    std::cout << "終了します。" << std::endl;
    return 0;
}