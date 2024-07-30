#include "Parallelogram.h"

Parallelogram::Parallelogram()
{
	name = "Parallelogram";
	a = rand() % 30;
	b = rand() % 30;
	c = a;
	d = b;
	A = rand() % 90;
	B = rand() % 90;
	C = A;
	D = B;
}