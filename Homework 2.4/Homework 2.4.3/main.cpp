#include<iostream>
#include<string>

class Figure
{
public:
	Figure()
	{
		name = "Figure";
	}

protected:
	std::string name;
	std::string rightfigure;
	int side_count;
public:
	void get_name()
	{
		std::cout << name << ": \n";
	}

	void get_side_count()
	{
		std::cout << "Amount of sides: " << side_count << "\n";
	}

	void get_rightfigure()
	{
		figure_right();
		std::cout << rightfigure << "\n";
	}

	virtual void get_sides()
	{
		side_count = 0;
	}

	virtual void get_angles()
	{
		std::cout << "\n";
	}

protected:
	virtual void figure_right()
	{
		rightfigure = "Right figure";
	}

	
public:
	void get_info()
	{
		get_name();
		get_rightfigure();
		get_side_count();
		get_sides();
		get_angles();
		std::cout << "\n";
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

public:
	void get_sides() override
	{
		std::cout << "Sides: a = " << a << ", b = " << b << ", c = " << c << "\n";
	}

	void get_angles() override
	{
		std::cout << "Angles: A = " << A << ", B = " << B << ", C = " << C << "\n";
	}

	void figure_right() override
	{
		((side_count == 3 && (A + B + C) == 180) ? rightfigure = "Right figure" : rightfigure = "Wrong figure");
	}

	Triangle()
	{
		name = "Triangle";
		side_count = 3;
		a = rand() % 30;
		b = rand() % 30;
		c = rand() % 30;
		A = rand() % 90;
		B = rand() % 90;
		C = rand() % 90;
	}

	Triangle(int a, int b, int c, int A, int B, int C) : a(a), b(b), c(c), A(A), B(B), C(C)
	{
		name = "Triangle";
		side_count = 3;
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

	RightTriangle(int a, int b, int c, int A, int B)
	{
		name = "Right triangle";
		this->a = a;
		this->b = b;
		this->c = c;
		this->A = A;
		this->B = B;
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
		c = a;
		C = A;
	}

	IsoscelesTriangle(int a, int b, int A, int B) 
	{
		name = "Isosceles triangle";
		this->a = a;
		this->b = b;
		this->A = A;
		this->B = B;
		c = a;
		C = A;
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

	EquilateralTriangle(int a)
	{
		name = "Equilateral triangle";
		this->a = a;
		b = c = a;
		A = B = C = 60;
	}
};

class Quadrilateral : public Figure
{
protected:
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int A = 0;
	int B = 0;
	int C = 0;
	int D = 0;

public:
	void get_sides() override
	{
		std::cout << "Sides: a = " << a << ", b = " << b << ", c = " << c << ", d = " << d << "\n";
	}

	void get_angles() override
	{
		std::cout << "Angles: A = " << A << ", B = " << B << ", C = " << C << ", D = " << D << "\n";
	}

	void figure_right() override
	{
		((side_count == 4 && (A + B + C + D) == 360) ? rightfigure = "Right figure" : rightfigure = "Wrong figure");
	}

	Quadrilateral()
	{
		name = "Quadrilateral";
		side_count = 4;
		a = rand() % 30;
		b = rand() % 30;
		c = rand() % 30;
		d = rand() % 30;
		A = rand() % 90;
		B = rand() % 90;
		C = rand() % 90;
		D = rand() % 90;
	}

	Quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D)
	{
		name = "Quadrilateral";
		side_count = 4;
		this->a = a;
		this->b = b;
		this->c = c;
		this->d = d;
		this->A = A;
		this->B = B;
		this->C = C;
		this->D = D;
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

	Rectangular(int a, int b)
	{
		name = "Rectangular";
		this->a = a;
		this->b = b;
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

	Square(int a)
	{
		name = "Square";
		this->a = a;
		b = c = d = a;
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

	Parallelogram(int a, int b, int A, int B)
	{
		name = "Parallelogram";
		this->a = a;
		this->b = b;
		c = a;
		d = b;
		this->A = A;
		this->B = B;
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

	Rhombus(int a, int A, int B)
	{
		name = "Rhombus";
		this->a = a;
		this->A = A;
		this->B = B;
		b = c = d = a;
		C = A;
		D = B;
	}
};

int main()
{
	int choice1;
	int choice2;
	bool exit = true;
	int numb = 0;
	while (exit)
	{
		std::cout << "Input the figure you want to describe: \n" << "1. Triangle\n" <<
			"2. Right triangle\n" <<
			"3. Isosceles triangle\n" <<
			"4. Equilateral triangle\n" <<
			"5. Quadrilateral\n" <<
			"6. Rectangular\n" <<
			"7. Square\n" <<
			"8. Parallelogram\n" <<
			"9. Rhombus\n";
		std::cin >> choice1;
		std::cout << "If you want to input parameters of the figure enter '1', else enter '0'(in this case parameters will be chosen by random): ";
		std::cin >> choice2;
		switch (choice1)
		{
		case 1:
		{
			if (choice2 == 1)
			{
				int a, b, c, A, B, C;
				std::cout << "Input parameters of the triangle(a,b,c,A,B,C): ";
				std::cin >> a >> b >> c >> A >> B >> C;
				Triangle* figure = new Triangle(a, b, c, A, B, C);
				Figure* pfigure = &(*figure);
				figure->get_info();
				delete figure;
			}
			else
			{
				Triangle* figure = new Triangle;
				Figure* pfigure = &(*figure);
				figure->get_info();
				delete figure;
			}
			
		}
			break;
		case 2:
		{
			if (choice2 == 1)
			{
				int a, b, c, A, B;
				std::cout << "Input parameters of the right triangle(a,b,c,A,B): ";
				std::cin >> a >> b >> c >> A >> B;
				RightTriangle* figure = new RightTriangle(a, b, c, A, B);
				Figure* pfigure = &(*figure);
				figure->get_info();
				delete figure;
			}
			else
			{
				RightTriangle* figure = new RightTriangle;
				Figure* pfigure = &(*figure);
				pfigure->get_info();
				delete figure;
			}
		}
			break;
		case 3:
		{
			if (choice2 == 1)
			{
				int a, b, A, B;
				std::cout << "Input parameters of the isosceles triangle(a,b,A,B): ";
				std::cin >> a >> b >> A >> B;
				IsoscelesTriangle* figure = new IsoscelesTriangle(a, b, A, B);
				Figure* pfigure = &(*figure);
				figure->get_info();
				delete figure;
			}
			else
			{
				IsoscelesTriangle* figure = new IsoscelesTriangle;
				Figure* pfigure = &(*figure);
				pfigure->get_info();
				delete figure;
			}
		}
			break;
		case 4:
		{
			if (choice2 == 1)
			{
				int a;
				std::cout << "Input parameters of the equilateral triangle(a): ";
				std::cin >> a;
				EquilateralTriangle* figure = new EquilateralTriangle(a);
				Figure* pfigure = &(*figure);
				figure->get_info();
				delete figure;
			}
			else
			{
				EquilateralTriangle* figure = new EquilateralTriangle;
				Figure* pfigure = &(*figure);
				pfigure->get_info();
				delete figure;
			}
		}
			break;
		case 5:
		{
			if (choice2 == 1)
			{
				int a, b, c, d, A, B, C, D;
				std::cout << "Input parameters of the quadrilateral(a,b,c,d,A,B,C,D): ";
				std::cin >> a >> b >> c >> d >> A >> B >> C >> D;
				Quadrilateral* figure = new Quadrilateral(a, b, c, d, A, B, C, D);
				Figure* pfigure = &(*figure);
				figure->get_info();
				delete figure;
			}
			else
			{
				Quadrilateral* figure = new Quadrilateral;
				Figure* pfigure = &(*figure);
				pfigure->get_info();
				delete figure;
			}
		}
			break;
		case 6:
		{
			if (choice2 == 1)
			{
				int a, b;
				std::cout << "Input parameters of the rectangular(a,b): ";
				std::cin >> a >> b;
				Rectangular* figure = new Rectangular(a, b);
				Figure* pfigure = &(*figure);
				figure->get_info();
				delete figure;
			}
			else
			{
				Rectangular* figure = new Rectangular;
				Figure* pfigure = &(*figure);
				pfigure->get_info();
				delete figure;
			}
		}
			break;
		case 7:
		{
			if (choice2 == 1)
			{
				int a;
				std::cout << "Input parameters of the square(a): ";
				std::cin >> a;
				Square* figure = new Square(a);
				Figure* pfigure = &(*figure);
				figure->get_info();
				delete figure;
			}
			else
			{
				Square* figure = new Square;
				Figure* pfigure = &(*figure);
				pfigure->get_info();
				delete figure;
			}
		}
			break;
		case 8:
		{
			if (choice2 == 1)
			{
				int a, b, A, B;
				std::cout << "Input parameters of the parallelogram(a,b,A,B): ";
				std::cin >> a >> b >> A >> B;
				Parallelogram* figure = new Parallelogram(a, b, A, B);
				Figure* pfigure = &(*figure);
				figure->get_info();
				delete figure;
			}
			else
			{
				Parallelogram* figure = new Parallelogram;
				Figure* pfigure = &(*figure);
				pfigure->get_info();
				delete figure;
			}
		}
			break;
		case 9:
		{
			if (choice2 == 1)
			{
				int a, A, B;
				std::cout << "Input parameters of the rhombus(a,A,B): ";
				std::cin >> a >> A >> B;
				Rhombus* figure = new Rhombus(a, A, B);
				Figure* pfigure = &(*figure);
				figure->get_info();
				delete figure;
			}
			else
			{
				Rhombus* figure = new Rhombus;
				Figure* pfigure = &(*figure);
				pfigure->get_info();
				delete figure;
			}
		}
			break;
		default:
		{
			Figure* figure = new Figure;
			figure->get_info();
			delete figure;
		}
			break;
		}

		std::cout << "If you want to exit enter 0: ";
		std::cin >> numb;
		(numb == 0 ? exit = false : exit);
	}
	return 0;
}