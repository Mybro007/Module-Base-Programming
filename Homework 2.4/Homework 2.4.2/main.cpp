#include<iostream>
#include<string>
#include <cstdlib> 
#include <ctime>

class Figure
{
	protected:
		std::string name;
		void get_name()
		{
			std::cout << name << ": \n";
		}

		virtual void get_sides() = 0;

		virtual void get_angles() = 0;
	public:
		void get_figure()
		{
			get_name();
			get_sides();
			get_angles();
		}
};

class Triangle : public Figure
{
	protected:
		int a = 0;
		int b = 0;
		int c = 0;
		int A = 0;
		int B = 0;
		int C = 0;

	private:
		void get_sides() override
		{
			std::cout << "Sides: a = " << a << ", b = " << b << ", c = " << c << "\n";
		}

		void get_angles() override
		{
			std::cout << "Angles: A = " << A << ", B = " << B << ", C = " << C << "\n";
		}

	public:
		Triangle()
		{
			name = "Triangle";
			a = rand() % 30;
			b = rand() % 30;
			c = rand() % 30;
			A = rand() % 90;
			B = rand() % 90;
			C = rand() % 90;
		}
};

class RightTriangle : public Triangle
{
	public:
		RightTriangle()
		{
			name = "Right triangle";
			a = rand() % 30;
			b = rand() % 30;
			c = rand() % 30;
			A = rand() % 90;
			B = rand() % 90;
			C = 90;
		}
};

class IsoscelesTriangle : public Triangle
{
	public:
		IsoscelesTriangle()
		{
			name = "Isosceles triangle";
			a = rand() % 30;
			b = rand() % 30;
			A = rand() % 90;
			B = rand() % 90;
			a = c;
			A = C;
		}
};

class EquilateralTriangle : public Triangle
{
public:
	EquilateralTriangle()
	{
		name = "Equilateral triangle";
		a = rand() % 30;
		b = c = a;
		A = B = C = 60;
	}
};

class Quadrilateral : public Figure
{
	protected:
		int a=0;
		int b=0;
		int c=0;
		int d=0;
		int A=0;
		int B=0;
		int C=0;
		int D=0;

	private:
		void get_sides() override
		{
			std::cout << "Sides: a = " << a << ", b = " << b << ", c = " << c << ", d = " << d << "\n";
		}

		void get_angles() override
		{
			std::cout << "Angles: A = " << A << ", B = " << B << ", C = " << C << ", D = " << D << "\n";
		}

	public:
		Quadrilateral()
		{
			name = "Quadrilateral";
			a = rand() % 30;
			b = rand() % 30;
			c = rand() % 30;
			d = rand() % 30;
			A = rand() % 90;
			B = rand() % 90;
			C = rand() % 90;
			D = rand() % 90;
		}
};

class Rectangular : public Quadrilateral
{
	public:
		Rectangular()
		{
			name = "Rectangular";
			a = rand() % 30;
			b = rand() % 30;
			c = a;
			d = b;
			A = B = C = D = 90;
		}
};

class Square : public Quadrilateral
{
public:
	Square()
	{
		name = "Square";
		a = rand() % 30;
		a = b = c = d;
		A = B = C = D = 90;
	}
};

class Parallelogram : public Quadrilateral
{
public:
	Parallelogram()
	{
		name = "Parallelogram";
		a = rand() % 30;
		b = rand() % 30;
		c = a;
		d = b;
		A = rand() % 90;
		B = rand() % 90;
		C = A;
		D = B;
	}
};

class Rhombus : public Quadrilateral
{
public:
	Rhombus()
	{
		name = "Rhombus";
		a = rand() % 30;
		A = rand() % 90;
		B = rand() % 90;
		a = b = c = d;
		C = A;
		D = B;
	}
};

void print_info(Figure& fig)
{
	fig.get_figure();
	std::cout << "\n";
}

int main()
{
	srand(time(NULL));
	RightTriangle* a = new RightTriangle;
	print_info(*a);
	delete a;
	IsoscelesTriangle* b = new IsoscelesTriangle;
	print_info(*b);
	delete b;
	EquilateralTriangle* c = new EquilateralTriangle;
	print_info(*c);
	delete c;
	Rectangular* d = new Rectangular;
	print_info(*d);
	delete d;
	Square* e = new Square;
	print_info(*e);
	delete e;
	Parallelogram* f = new Parallelogram;
	print_info(*f);
	delete f;
	Rhombus* g = new Rhombus;
	print_info(*g);
	delete g;
	return 0;
}