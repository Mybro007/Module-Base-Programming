#include"Leaver.h"

LeaveLib::Leaver::Leaver(std::string name) : name(name)
{}

void LeaveLib::Leaver::leave()
{
	std::cout << "Good bye, " << name << "!!!\n";
}