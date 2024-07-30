#include "EquilateralTriangle.h"

EquilateralTriangle::EquilateralTriangle()
{
	name = "Equilateral triangle";
	a = rand() % 30;
	b = c = a;
	A = B = C = 60;
}