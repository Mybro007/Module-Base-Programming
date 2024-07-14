#pragma once
#include<iostream>


class Counter
{
public:
	Counter(int value);

private:
	int value;
	char operation;

private:
	void check();
public:
	void chooseOperation();

	void action();
	
	char getOperation();
};
