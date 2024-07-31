#include <iostream>
#include "Leaver.h"

int main()
{
    std::string name;
    std::cout << "Input your name: ";
    std::cin >> name;
    LeaveLib::Leaver lv(name);
    lv.leave();
    return 0;
}