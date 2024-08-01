#pragma warning (disable : 4251 )
#include<iostream>
#include"Includer.h"

int main()
{
	srand(time(NULL));
	RightTriangle* a = new RightTriangle;
	print_info(*a);
	delete a;
	IsoscelesTriangle* b = new IsoscelesTriangle;
	print_info(*b);
	delete b;
	EquilateralTriangle* c = new EquilateralTriangle;
	print_info(*c);
	delete c;
	Rectangular* d = new Rectangular;
	print_info(*d);
	delete d;
	Square* e = new Square;
	print_info(*e);
	delete e;
	Parallelogram* f = new Parallelogram;
	print_info(*f);
	delete f;
	Rhombus* g = new Rhombus;
	print_info(*g);
	delete g;
	return 0;
}