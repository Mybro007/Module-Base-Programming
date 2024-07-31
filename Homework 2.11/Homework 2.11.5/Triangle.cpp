#include "Triangle.h"

void Triangle::get_sides()
{
	std::cout << "Sides: a = " << a << ", b = " << b << ", c = " << c << "\n";
}

void Triangle::get_angles()
{
	std::cout << "Angles: A = " << A << ", B = " << B << ", C = " << C << "\n";
}

Triangle::Triangle()
{
	name = "Triangle";
	a = rand() % 30;
	b = rand() % 30;
	c = rand() % 30;
	A = rand() % 90;
	B = rand() % 90;
	C = rand() % 90;
}