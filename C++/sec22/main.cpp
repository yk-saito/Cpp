#include "rat.h"
#include <iostream>

int	main(void)
{
	CRat	*rat1, *rat2, *rat3;

	CRat::showNum();
	rat1 = new CRat();
	rat1->squeak();
	CRat::showNum();
	rat2 = new CRat();
	rat3 = new CRat();
	rat2->squeak();
	rat3->squeak();
	delete rat1;
	delete rat2;
	CRat::showNum();
	delete rat3;
	CRat::showNum();
	return (0);
}