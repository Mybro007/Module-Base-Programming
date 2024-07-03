#include<iostream>
#include<string>


struct account
{
	int accountNumber;
	std::string name;
	float balance;
};

void show(account acc)
{
	std::cout << "The account number: "<<acc.accountNumber<<"\n";
	std::cout << "The owner's name: " << acc.name << "\n";
	std::cout << "The balance: " << acc.balance << "\n";
}

void setAccount(account &account)
{
	std::cout << "Input the account number: ";
	std::cin >> account.accountNumber;
	std::cout << "Input the owner's name: ";
	std::cin >> account.name;
	std::cout << "Input the balance: ";
	std::cin >> account.balance;
}

int main()
{
	account account1;
	setAccount(account1);
	std::cout << "\n";
	show(account1);
	std::cout << "\n";
	std::cout << "Input the new balance: ";
	std::cin >> account1.balance;
	std::cout << "\n";
	show(account1);
	return 0;
}