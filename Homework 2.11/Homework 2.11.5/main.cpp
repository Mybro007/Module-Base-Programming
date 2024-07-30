#include<iostream>
#include"Figure.h"
#include"Triangle.h"
#include"Quadrilateral.h"
#include"RightTriangle.h"
#include"EquilateralTriangle.h"
#include"IsoscelesTriangle.h"
#include"Rectangular.h"
#include"Square.h"
#include"Parallelogram.h"
#include"Rhombus.h"
#include"Functions.h"


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