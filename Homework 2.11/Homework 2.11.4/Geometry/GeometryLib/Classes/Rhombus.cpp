#include "Rhombus.h"

Rhombus::Rhombus()
{
	name = "Rhombus";
	a = rand() % 30;
	A = rand() % 90;
	B = rand() % 90;
	a = b = c = d;
	C = A;
	D = B;
}