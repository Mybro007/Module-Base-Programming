#include "Figure.h"


void Figure::get_name()
{
	std::cout << name << ": \n";
}

void Figure::get_figure()
{
	get_name();
	get_sides();
	get_angles();
}