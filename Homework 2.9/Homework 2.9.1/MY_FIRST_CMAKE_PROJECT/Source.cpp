#include<iostream>
#include<string>

class Greetings
{
private:
	std::string name;
public: 
	Greetings(std::string name) : name(name)
	{}

	void welcome()
	{
		std::cout << "Welcome " << name << "!!! Nice to see you today!!!\n";
	}
};

int main()
{
	std::string name;
	std::cout << "Input your name: ";
	std::cin >> name;
	Greetings gr(name);
	gr.welcome();
	return 0;
}