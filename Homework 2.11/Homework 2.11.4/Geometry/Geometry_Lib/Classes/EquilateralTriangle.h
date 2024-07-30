#pragma once
#ifdef FIG_EXPORTS
#define FIG_API __declspec(dllexport)
#else
#define FIG_API __declspec(dllimport)
#endif

#include "Triangle.h"

class EquilateralTriangle : public Triangle
{
public:
	FIG_API EquilateralTriangle();
};
