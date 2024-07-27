#include <iostream>

class Fraction
{
private:
	int numerator_;
	int denominator_;

public:
	Fraction(int numerator, int denominator) : numerator_{numerator}, denominator_{denominator}
	{}

	friend bool operator==(const Fraction& f1, const Fraction& f2)
	{
		return{ f1.numerator_ == f2.numerator_ && f1.denominator_ == f2.denominator_ };
	}
	
	friend bool operator!=(const Fraction& f1, const Fraction& f2)
	{
		return{ f1.numerator_ != f2.numerator_ || f1.denominator_ != f2.denominator_ };
	}

	friend bool operator<(const Fraction& f1, const Fraction& f2)
	{
		return{ f1.numerator_ < f2.numerator_ && f1.denominator_ < f2.denominator_ };
	}

	friend bool operator>(const Fraction& f1, const Fraction& f2)
	{
		return{ f1.numerator_ > f2.numerator_ && f1.denominator_ > f2.denominator_ };
	}

	friend bool operator<=(const Fraction& f1, const Fraction& f2)
	{
		return{ f1.numerator_ <= f2.numerator_ && f1.denominator_ <= f2.denominator_ };
	}
	
	friend bool operator>=(const Fraction& f1, const Fraction& f2)
	{
		return{ f1.numerator_ >= f2.numerator_ && f1.denominator_ >= f2.denominator_ };
	}
};

int main()
{
	Fraction f1(4, 3);
	Fraction f2(6, 11);

	std::cout << "f1" << ((f1 == f2) ? " == " : " not == ") << "f2" << '\n';
	std::cout << "f1" << ((f1 != f2) ? " != " : " not != ") << "f2" << '\n';
	std::cout << "f1" << ((f1 < f2) ? " < " : " not < ") << "f2" << '\n';
	std::cout << "f1" << ((f1 > f2) ? " > " : " not > ") << "f2" << '\n';
	std::cout << "f1" << ((f1 <= f2) ? " <= " : " not <= ") << "f2" << '\n';
	std::cout << "f1" << ((f1 >= f2) ? " >= " : " not >= ") << "f2" << '\n';
	return 0;
}