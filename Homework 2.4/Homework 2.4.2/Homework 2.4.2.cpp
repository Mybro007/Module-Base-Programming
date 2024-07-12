#include<iostream>
#include<string>
#include <cstdlib> 
#include <ctime>

class Triangle
{
	protected:
		int a = 0;
		int b = 0;
		int c = 0;
		int A = 0;
		int B = 0;
		int C = 0;

	public:
		Triangle() = default;

		virtual void set_triangle()
		{
			a = rand() % 30;
			b = rand() % 30;
			c = rand() % 30;
			A = rand() % 90;
			B = rand() % 90;
			C = rand() % 90;
		}

		virtual void get_triangle()
		{
			std::cout << "Triangle: \n";
			std::cout << "Sides: a = " << a << ", b = " << b << ", c = " << c << "\n";
			std::cout << "Angles: A = " << A << ", B = " << B << ", C = " << C << "\n";
		}
};

class RightTriangle : public Triangle
{
	public:
		RightTriangle()
		{
			C = 90;
		}

		void set_triangle() override
		{
			a = rand() % 30;
			b = rand() % 30;
			c = rand() % 30;
			A = rand() % 90;
			B = rand() % 90;
		}

		void get_triangle() override
		{
			std::cout << "Right triangle: \n";
			std::cout << "Sides: a = " << a << ", b = " << b << ", c = " << c << "\n";
			std::cout << "Angles: A = " << A << ", B = " << B << ", C = " << C << "\n";
		}
};

class IsoscelesTriangle : public Triangle
{
	public:
		IsoscelesTriangle() = default;

		void set_triangle() override
		{
			a = rand() % 30;
			b = rand() % 30;
			A = rand() % 90;
			B = rand() % 90;
			a = c;
			A = C;
		}

		void get_triangle() override
		{
			std::cout << "Isosceles triangle: \n";
			std::cout << "Sides: a = " << a << ", b = " << b << ", c = " << c << "\n";
			std::cout << "Angles: A = " << A << ", B = " << B << ", C = " << C << "\n";
		}
};

class EquilateralTriangle : public Triangle
{
public:
	EquilateralTriangle()
	{
		A = B = C = 60;
	}

	void set_triangle() override
	{
		a = rand() % 30;
		b = c = a;
	}

	void get_triangle() override
	{
		std::cout << "Equilateral triangle: \n";
		std::cout << "Sides: a = " << a << ", b = " << b << ", c = " << c << "\n";
		std::cout << "Angles: A = " << A << ", B = " << B << ", C = " << C << "\n";
	}
};

class Quadrilateral
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

	public:
		Quadrilateral() = default;

		virtual void set_quadrilateral()
		{
			a = rand() % 30;
			b = rand() % 30;
			c = rand() % 30; 
			d = rand() % 30;
			A = rand() % 90;
			B = rand() % 90;
			C = rand() % 90;
			D = rand() % 90;
		}

		virtual void get_quadrilateral()
		{
			std::cout << "Quadrilateral: \n";
			std::cout << "Sides: a = " << a << ", b = " << b << ", c = " << c << ", d = "<< d << "\n";
			std::cout << "Angles: A = " << A << ", B = " << B << ", C = " << C << ", D = "<< D << "\n";
		}
};

class Rectangular : public Quadrilateral
{
	public:
		Rectangular()
		{
			A = B = C = D = 90;
		}

		void set_quadrilateral() override
		{
			a = rand() % 30;
			b = rand() % 30;
			c = a;
			d = b;
		}

		void get_quadrilateral() override
		{
			std::cout << "Rectangular: \n";
			std::cout << "Sides: a = " << a << ", b = " << b << ", c = " << c << ", d = " << d << "\n";
			std::cout << "Angles: A = " << A << ", B = " << B << ", C = " << C << ", D = " << D << "\n";
		}
};

class Square : public Quadrilateral
{
public:
	Square()
	{
		A = B = C = D = 90;
	}

	void set_quadrilateral() override
	{
		a = rand() % 30;
		a = b = c = d;
	}

	void get_quadrilateral() override
	{
		std::cout << "Square: \n";
		std::cout << "Sides: a = " << a << ", b = " << b << ", c = " << c << ", d = " << d << "\n";
		std::cout << "Angles: A = " << A << ", B = " << B << ", C = " << C << ", D = " << D << "\n";
	}
};

class Parallelogram : public Quadrilateral
{
public:
	Parallelogram() = default;

	void set_quadrilateral() override
	{
		a = rand() % 30;
		b = rand() % 30;
		c = a;
		d = b;
	}

	void get_quadrilateral() override
	{
		std::cout << "Parallelogram: \n";
		std::cout << "Sides: a = " << a << ", b = " << b << ", c = " << c << ", d = " << d << "\n";
		std::cout << "Angles: A = " << A << ", B = " << B << ", C = " << C << ", D = " << D << "\n";
	}
};

class Rhombus : public Quadrilateral
{
public:
	Rhombus() = default;

	void set_quadrilateral() override
	{
		a = rand() % 30;
		A = rand() % 90;
		B = rand() % 90;
		a = b = c = d;
		C = A;
		D = B;
	}

	void get_quadrilateral() override
	{
		std::cout << "Rhombus: \n";
		std::cout << "Sides: a = " << a << ", b = " << b << ", c = " << c << ", d = " << d << "\n";
		std::cout << "Angles: A = " << A << ", B = " << B << ", C = " << C << ", D = " << D << "\n";
	}
};

void print_info(Triangle& fig)
{
	fig.get_triangle();
	std::cout << "\n";
}

void print_info(Quadrilateral& fig)
{
	fig.get_quadrilateral();
	std::cout << "\n";
}

int main()
{
	srand(time(NULL));
	RightTriangle* a = new RightTriangle;
	a->set_triangle();
	print_info(*a);
	IsoscelesTriangle* b = new IsoscelesTriangle;
	b->set_triangle();
	print_info(*b);
	EquilateralTriangle* c = new EquilateralTriangle;
	c->set_triangle();
	print_info(*c);
	Rectangular* d = new Rectangular;
	d->set_quadrilateral();
	print_info(*d);
	Square* e = new Square;
	e->set_quadrilateral();
	print_info(*e);
	Parallelogram* f = new Parallelogram;
	f->set_quadrilateral();
	print_info(*f);
	Rhombus* g = new Rhombus;
	g->set_quadrilateral();
	print_info(*g);
	return 0;
}