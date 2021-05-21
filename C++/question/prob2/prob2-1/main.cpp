#include <iostream>
#include "calculation.h"

using namespace std;

int main(void)
{
	Calculation calc;
	calc.a = 4;
	calc.b = 3;
	cout << calc.a << " + " << calc.b << " = " << calc.add() << endl;
	cout << calc.a << " - " << calc.b << " = " << calc.sub() << endl;
	return 0;
}