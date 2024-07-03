#include<iostream>
#include<string>

struct adress
{
	std::string city;
	std::string street;
	int home;
	int flat;
	int index;
};

void setAdress(adress& adr)
{
	std::cout << "Input the city: ";
	std::cin >> adr.city;
	std::cout << "Input the street: ";
	std::cin >> adr.street;
	std::cout << "Input the number of home: ";
	std::cin >> adr.home;
	std::cout << "Input the number of flat: ";
	std::cin >> adr.flat;
	std::cout << "Input the index: ";
	std::cin >> adr.index;
}

void showAdress(adress adr)
{
	std::cout << "\nCity: " << adr.city << "\n";
	std::cout << "Street: " << adr.street << "\n";
	std::cout << "Home number: " << adr.home << "\n";
	std::cout << "Flat number: " << adr.flat << "\n";
	std::cout << "Index: " << adr.index << "\n";
}

int main()
{
	adress adr1;
	setAdress(adr1);
	adress adr2;
	setAdress(adr2);
	showAdress(adr1);
	showAdress(adr2);
	return 0;
}