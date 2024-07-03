#include<iostream>
#include<string>

class Counter
{
	public:
		Counter(int value)
		{
			this->value = value;
		}

	private:
		int value;
		char operation;

	private:
		void check()
		{
			if (!(operation == '+' || operation == '-' || operation == '=' || operation == 'x'))
			{
				std::cout << "Wrong operation!!! Try again: ";
				chooseOperation();
			}
		}
		
	public:
		void chooseOperation()
		{
			std::cout << "Choose the operation you want: \n" << "'+' - add 1 to current value. \n" << "'-' - decrease current number by 1. \n" << "'=' - find out current value. \n" << "'x' - exit.\n";
			std::cin >> operation;
			check();
		}

		void action()
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
					std::cout<<"See you later. Good bye!\n";
					break;
			}
		}

		char getOperation()
		{
			return operation;
		}
};

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

	while (count.getOperation()!='x')
	{
		count.chooseOperation();
		count.action();
	}
	return 0;
}