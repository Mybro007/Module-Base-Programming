#include <iostream>
#include "Greetings.h"

int main()
{
    std::string name;
    std::cout << "Input your name: ";
    std::cin >> name;
    GreetingLib::Greeting gr(name);
    gr.greet();
    return 0;
}