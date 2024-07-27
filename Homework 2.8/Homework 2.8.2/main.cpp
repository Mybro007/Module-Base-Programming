#include <iostream>

class Fraction
{
private:
	int numerator_{};
	int denominator_{};
	int counter{};

public:
	Fraction(int counter) : counter(counter)
	{
		set_fract();
		reducing();
	}

	Fraction(int num1, int num2) : numerator_{ num1 }, denominator_{ num2 }
	{}

	void set_fract()
	{
		std::cout << "Введите числитель дроби " << counter << ": ";
		std::cin >> numerator_;
		std::cout << "Введите знаменатель дроби " << counter << ": ";
		std::cin >> denominator_;
	}

	void get_fract()
	{
		std::cout << "Значение дроби " << counter << ": " << get_numer() << "/" << get_denom() << "\n";
	}

	int get_numer()
	{
		return numerator_;
	}

	int get_denom()
	{
		return denominator_;
	}

	int nod(int num1, int num2)
	{
		if (num2 == 0) return num1;
		return nod(num2, num1 % num2);
	}

	Fraction reducing()
	{
		int a{};
		int b{};
		if (numerator_ > denominator_)
		{
			a = numerator_;
			b = denominator_;
		}
		else
		{
			b = numerator_;
			a = denominator_;
		}
		int sgn;
		if (numerator_ * denominator_ >= 0) sgn = 1;
		else sgn = -1;
		int nod = Fraction::nod(a, b);
		return Fraction((abs(numerator_) / nod), sgn*abs(denominator_) / nod);
	}

	Fraction operator+(const Fraction& f2)
	{
		return Fraction( numerator_*f2.denominator_ + f2.numerator_*denominator_, denominator_ * f2.denominator_ ).reducing();
	}

	Fraction operator-(const Fraction& f2)
	{
		return Fraction(numerator_ * f2.denominator_ - f2.numerator_ * denominator_, denominator_ * f2.denominator_).reducing();
	}

	Fraction operator*(const Fraction& f2)
	{
		return Fraction(numerator_ * f2.numerator_, denominator_ * f2.denominator_).reducing();
	}
	
	Fraction operator/(const Fraction& f2)
	{
		return Fraction(numerator_ * f2.denominator_, denominator_ * f2.numerator_).reducing();
	}

	Fraction operator-()
	{
		return { -numerator_, -denominator_ };
	}

	Fraction& operator++ ()
	{
		numerator_ += denominator_;
		this->reducing();
		return *this;
	}

	Fraction operator++(int)
	{
		Fraction temporary{ *this };
		++(*this);
		return temporary;
	}

	Fraction& operator-- ()
	{
		numerator_ -= denominator_;
		this->reducing();
		return *this;
	}

	Fraction operator--(int)
	{
		Fraction temporary{ *this };
		--(*this);
		return temporary;
	}

	Fraction operator=(Fraction& f1)
	{
		return Fraction(numerator_ = f1.numerator_, denominator_ = f1.denominator_);
	}
};

void workWithFract(Fraction& f1, Fraction& f2)
{
	std::cout << "\n\n";
	std::cout << f1.get_numer() << "/" << f1.get_denom() << " + " << f2.get_numer() << "/" << f2.get_denom() << " = " << (f1 + f2).get_numer() << "/" << (f1 + f2).get_denom() << "\n";
	std::cout << f1.get_numer() << "/" << f1.get_denom() << " - " << f2.get_numer() << "/" << f2.get_denom() << " = " << (f1 - f2).get_numer() << "/" << (f1 - f2).get_denom() << "\n";
	std::cout << f1.get_numer() << "/" << f1.get_denom() << " * " << f2.get_numer() << "/" << f2.get_denom() << " = " << (f1 * f2).get_numer() << "/" << (f1 * f2).get_denom() << "\n";
	std::cout << f1.get_numer() << "/" << f1.get_denom() << " / " << f2.get_numer() << "/" << f2.get_denom() << " = " << (f1 / f2).get_numer() << "/" << (f1 / f2).get_denom() << "\n";
	Fraction* f3 = new Fraction(0,0);
	*f3 = f1;
	std::cout << "Значение выражения ++" << (*f3).get_numer() << "/" << (*f3).get_denom() << " * " << f2.get_numer() << "/" << f2.get_denom() << " = " << ((++f1) * f2).get_numer() << "/" << (f1 * f2).get_denom() << "\n";
	std::cout << "Значение дроби 1: " << f1.get_numer() << "/" << f1.get_denom() << "\n";
	*f3 = f1;
	std::cout << "Значение выражения " << (*f3).get_numer() << "/" << (*f3).get_denom() << "--" << " * " << f2.get_numer() << "/" << f2.get_denom() << " = " << ((f1--) * f2).get_numer() << "/" << (f1 * f2).get_denom() << "\n";
	std::cout << "Значение дроби 1: " << f1.get_numer() << "/" << f1.get_denom() << "\n";
	delete f3;
}

int main()
{
	setlocale(LC_ALL, "Rus");
	int counter{ 1 };
	Fraction* f1 = new Fraction(counter);
	++counter;
	Fraction* f2 = new Fraction(counter);
	workWithFract(*f1, *f2);
	delete f1;
	delete f2;
	return 0;
}