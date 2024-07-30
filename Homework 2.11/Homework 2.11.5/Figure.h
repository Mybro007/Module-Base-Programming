#pragma once
#include<string>
#include<iostream>

class Figure
{
protected:
	std::string name;
	void get_name();
	
	virtual void get_sides() = 0;

	virtual void get_angles() = 0;
public:
	void get_figure();
};