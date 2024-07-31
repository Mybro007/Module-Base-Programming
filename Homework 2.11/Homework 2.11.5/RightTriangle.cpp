#include "RightTriangle.h"

RightTriangle::RightTriangle()
{
	name = "Right triangle";
	a = rand() % 30;
	b = rand() % 30;
	c = rand() % 30;
	A = rand() % 90;
	B = rand() % 90;
	C = 90;
}