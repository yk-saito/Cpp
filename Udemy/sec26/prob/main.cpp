#include "foo.h"
#include "bar.h"
#include <iostream>

using namespace std;

int	main()
{
    Foo* pFoo;
    Bar* pBar;

	pFoo->hoge();
	pBar->func2();
	pFoo->fuga(pBar);
	pBar->func1(pFoo);
	return (0);
}