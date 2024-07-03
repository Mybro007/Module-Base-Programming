#include<iostream>

int main()
{
	enum month
	{
		january = 1,
		february,
		march,
		april,
		may,
		june,
		july,
		august,
		september,
		october,
		november,
		december
	};

	int expectation;
	bool exit = true;

	while (exit)
	{
		int number = 0;
		std::cout << "Input the number of the month: ";
		std::cin >> number;
		std::cout << "Your month is ";
		switch (number)
		{
			case january:
				std::cout << "January\n";
				break;
			case february:
				std::cout << "February\n";
				break;
			case march:
				std::cout << "March\n";
				break;
			case april:
				std::cout << "April\n";
				break;
			case may:
				std::cout << "May\n";
				break;
			case june:
				std::cout << "June\n";
				break;
			case july:
				std::cout << "July\n";
				break;
			case august:
				std::cout << "August\n";
				break;
			case september:
				std::cout << "September\n";
				break;
			case october:
				std::cout << "October\n";
				break;
			case november:
				std::cout << "November\n";
				break;
			case december:
				std::cout << "December\n";
				break;
			default:
				std::cout << "Wrong number!!!\n";
				break;
		}

		std::cout << "\nIf you want to continue input 1, else input any number except the 1: ";
		std::cin >> expectation;
		if (expectation != 1) exit = false;
		std::cout << "\n";
	}

	return 0;
}