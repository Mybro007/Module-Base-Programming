#include<iostream>
#include"Counter.h"

int main()
{
	int initvalue = 1;
	bool exit = false;
	std::string initial;
	std::cout << "\n\n\t\t\tWelcome to app 'Counter'!!!\n\n\n";
	std::cout << "If you want to input initial value print 'Yes', else initial value will be 1: ";
	std::cin >> initial;
	if (initial == "Yes")
	{
		std::cout << "Input the initial value: ";
		std::cin >> initvalue;
	}

	Counter count(initvalue);

	while (count.getOperation() != 'x')
	{
		count.chooseOperation();
		count.action();
	}
	return 0;
}