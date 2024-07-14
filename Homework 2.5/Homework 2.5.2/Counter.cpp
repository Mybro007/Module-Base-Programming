#include"Counter.h"

Counter::Counter(int value)
{
	this->value = value;
}

void Counter::check()
{
	if (!(operation == '+' || operation == '-' || operation == '=' || operation == 'x'))
	{
		std::cout << "Wrong operation!!! Try again: ";
		chooseOperation();
	}
}

void Counter::chooseOperation()
{
	std::cout << "Choose the operation you want: \n" << "'+' - add 1 to current value. \n" << "'-' - decrease current number by 1. \n" << "'=' - find out current value. \n" << "'x' - exit.\n";
	std::cin >> operation;
	check();
}

void Counter::action()
{
	switch (operation)
	{
	case '+':
		++value;
		break;
	case '-':
		--value;
		break;
	case '=':
		std::cout << "Current value: " << value << "\n";
		break;
	case 'x':
		std::cout << "See you later. Good bye!\n";
		break;
	}
}

char Counter::getOperation()
{
	return operation;
}