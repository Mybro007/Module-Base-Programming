#pragma once
#ifdef GEOMETRYLIB_EXPORTS
#define GEOMETRYLIB_API __declspec(dllexport)
#else 
#define GEOMETRYLIB_API __declspec(dllimport)
#endif
#include<iostream>
#include<string>

class GEOMETRYLIB_API Figure
{
protected:
	std::string name;
	void get_name();
	
	virtual void get_sides() = 0;

	virtual void get_angles() = 0;
public:
	void get_figure();
};