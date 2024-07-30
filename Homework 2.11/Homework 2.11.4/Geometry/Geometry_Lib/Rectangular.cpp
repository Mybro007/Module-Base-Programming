#include "Rectangular.h"

Rectangular::Rectangular()
{
	name = "Rectangular";
	a = rand() % 30;
	b = rand() % 30;
	c = a;
	d = b;
	A = B = C = D = 90;
}