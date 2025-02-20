#pragma once
#include "Figure.h"

class GEOMETRYLIB_API Quadrilateral : public Figure
{
protected:
	int a;
	int b;
	int c;
	int d;
	int A;
	int B;
	int C;
	int D;

private:
	void get_sides() override;
	
	void get_angles() override;

public:
	Quadrilateral();
};