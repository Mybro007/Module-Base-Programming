#include<iostream>
#include"MathFunc.h"


int main()
{
	int a;
	int b;
	int act;
	std::cout << "Chose the math operation you want to do: \n"<<
				"1. Summary\n"<<
				"2. Difference\n"<<
				"3. Multiplication\n"<<
				"4. Division\n"<<
				"5. Exponentation\n";
	std::cin >> act;
	switch (act)
	{
		case 1:
			std::cout << "Input two numbers: ";
			std::cin >> a >> b;
			std::cout << "Summary of your numbers: " << Sum(a, b)<<"\n";
			break;
		case 2:
			std::cout << "Input two numbers: ";
			std::cin >> a >> b;
			std::cout << "Difference of your numbers: " << Dif(a, b) << "\n";
			break;
		case 3:
			std::cout << "Input two numbers: ";
			std::cin >> a >> b;
			std::cout << "Product of your numbers: " << Multyply(a, b) << "\n";
			break;
		case 4:
			std::cout << "Input two numbers: ";
			std::cin >> a >> b;
			std::cout << "Quotient of your numbers: " << Div(a, b) << "\n";
			break;
		case 5:
			std::cout << "Input a number: ";
			std::cin >> a;
			std::cout << "Input the degree: ";
			std::cin >> b;
			std::cout << "Degree of your number: " << Exp(a, b) << "\n";
			break;
	}
	return 0;
}