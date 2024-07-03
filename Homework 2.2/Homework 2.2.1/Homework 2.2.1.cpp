#include<iostream>

class Calculator
{
	public:
		Calculator()
		{
		}
	private:
		double num1;
		double num2;
	public:
		void check(double &num)
		{
			if (num == 0)
			{
				std::cout << "Invalid value!!! Try again: ";
				std::cin >> num;
				check(num);
			}
		}
		
		void setFirstNum()
		{
			std::cout << "Input the first number (except 0): ";
			std::cin >> num1;
			check(num1);
		}

		void setSecondNum()
		{
			std::cout << "Input the second number (except 0): ";
			std::cin >> num2;
			check(num2);
		}

		double add()
		{
			return num1 + num2;
		}

		double multiply()
		{
			return num1 * num2;
		}

		double subtract_1_2()
		{
			return num1 - num2;
		}

		double subtract_2_1()
		{
			return num2 - num1;
		}

		double divide_1_2()
		{
			return num1 / num2;
		}

		double divide_2_1()
		{
			return num2 / num1;
		}
};

int main()
{
	std::cout << "\n\n\t\t\tWelcome to the class calculator!!!\n\n\n";
	Calculator calc;
	while (true)
	{
		calc.setFirstNum();
		calc.setSecondNum();
		std::cout<<"Sum of numbers: "<<calc.add()<<"\n";
		std::cout<<"Product of numbers: "<<calc.multiply()<<"\n";
		std::cout<<"Number difference (first minus second): "<<calc.subtract_1_2()<<"\n";
		std::cout<<"Number difference (second minus first):"<<calc.subtract_2_1()<<"\n";
		std::cout<<"Quotient of numbers (first divided by second): "<<calc.divide_1_2()<<"\n";
		std::cout<<"Quotient of numbers (second divided by first): "<<calc.divide_2_1()<<"\n\n\n";
	}
	return 0;
}