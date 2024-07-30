#include"Greetings.h"

GreetingLib::Greeting::Greeting(std::string name) : name(name)
{}

void GreetingLib::Greeting::greet()
{
	std::cout << "Hello, " << name << "!!!\n";
}