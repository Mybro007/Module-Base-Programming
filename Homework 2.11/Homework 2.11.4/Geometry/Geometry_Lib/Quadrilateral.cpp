#include "Quadrilateral.h"

void Quadrilateral::get_sides()
{
	std::cout << "Sides: a = " << a << ", b = " << b << ", c = " << c << ", d = " << d << "\n";
}

void Quadrilateral::get_angles()
{
	std::cout << "Angles: A = " << A << ", B = " << B << ", C = " << C << ", D = " << D << "\n";
}

Quadrilateral::Quadrilateral()
{
	name = "Quadrilateral";
	a = rand() % 30;
	b = rand() % 30;
	c = rand() % 30;
	d = rand() % 30;
	A = rand() % 90;
	B = rand() % 90;
	C = rand() % 90;
	D = rand() % 90;
}