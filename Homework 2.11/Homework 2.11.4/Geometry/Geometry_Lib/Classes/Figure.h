#pragma once
#ifdef FIG_EXPORTS
#define FIG_API __declspec(dllexport)
#else
#define FIG_API __declspec(dllimport)
#endif
#include<iostream>
#include<string>

class Figure
{
protected:
	std::string name;
	FIG_API void get_name();
	
	FIG_API virtual void get_sides() = 0;

	FIG_API virtual void get_angles() = 0;
public:
	FIG_API void get_figure();
};