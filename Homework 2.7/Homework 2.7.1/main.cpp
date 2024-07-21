#include<iostream>
#include<string>

class ForbiddenLength : public std::exception
{
public:
	const char* what() const override { return "You have entered a string of forbidden length! Goodbye";}
};

int function(std::string s, int forbidden_len)
{
		if (s.length() == forbidden_len)
		{
			throw ForbiddenLength();
		}
		return s.length();
}

int main()
{
	bool exit = true;
	std::cout << "Input the forbidden length of a string: ";
	int forbidden_len;
	std::cin >> forbidden_len;
	while (exit)
	{
		std::string s;
		std::cout << "Input a word: ";
		std::cin >> s;
		try
		{
			std::cout << "The length of the word '" << s << "' is : " << function(s, forbidden_len) << "\n";
		}
		catch (const ForbiddenLength& ex) { std::cout << ex.what() << "\n"; exit = false; }
	}
	return 0;
}
