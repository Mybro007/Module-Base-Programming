#pragma once
#include "Figure.h"

GEOMETRYLIB_API class Triangle : public Figure
{
protected:
	int a;
	int b;
	int c;
	int A;
	int B;
	int C;

private:
	void get_sides() override;
	
	void get_angles() override;
	
public:
	Triangle();
};
