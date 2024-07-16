#include<iostream>

#define MODE 1

#ifndef MODE
#error Const MODE should be defined!!!
#endif

int main()
{
	#if (MODE==0)
		std::cout << "I'm working in training mode!\n";
	#elif (MODE==1)
		#define add(a, b) (a)+(b)
		std::cout << "I'm working in combat mode!\n";
		int a, b;
		std::cout << "Input the first number: ";
		std::cin >> a;
		std::cout << "Input the second number: ";
		std::cin >> b;
		std::cout << "Result = " << add(a, b) << "\n";
	#else
		std::cout << "Unknown mode. Shutdown!\n";
	#endif
	return 0;
}