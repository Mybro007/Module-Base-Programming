#include<iostream>
#include<string>

class Figure
{
	protected:
		int n;
		std::string name;
		std::string right_figure;

	public:

		virtual void set_figure()
		{
			n = 0;
			name = "Figure";
		}

		virtual void figure_right()
		{
			right_figure = "Right figure";
		}

		virtual void get_figure()
		{
			std::cout << name << ":\n";
			std::cout << right_figure << "\n";
			std::cout << n << "\n";
		}
};

class Triangle
{
protected:
	int n;
	std::string name;
	std::string right_figure;
	int a = 0;
	int b = 0;
	int c = 0;
	int A = 0;
	int B = 0;
	int C = 0;

public:
	Triangle()
	{
		name = "Triangle";
	}

	virtual void get_figure()
	{
		std::cout << name << ":\n";
		std::cout << right_figure << "\n";
		std::cout << n << "\n";
		std::cout << "Sides: a = " << a << ", b = " << b << ", c = " << c << "\n";
		std::cout << "Angles: A = " << A << ", B = " << B << ", C = " << C << "\n";
	}

	virtual void set_figure()
	{
		n = 3;
		std::cout << "Input sides of triangle (a,b,c): ";
		std::cin >> a >> b >> c;
		std::cout << "Input angles of triangle (A,B,C): ";
		std::cin >> A >> B >> C;
	}

	virtual void figure_right()
	{
		((n==3 && (A + B + C) == 180) ? right_figure = "Right figure" : right_figure = "Wrong figure");
	}
};

class RightTriangle : public Triangle
{
public:
	RightTriangle()
	{
		name = "Right triangle";
		C = 90;
	}

	void set_figure() override
	{
		n = 3;
		std::cout << "Input sides of right triangle (a,b,c): ";
		std::cin >> a >> b >> c;
		std::cout << "Input angles of right triangle (A,B): ";
		std::cin >> A >> B;
	}
};

class IsoscelesTriangle : public Triangle
{
public:
	IsoscelesTriangle()
	{
		name = "Isosceles triangle";
	}

	void set_figure() override
	{
		n = 3;
		std::cout << "Input sides of isosceles triangle (a,b): ";
		std::cin >> a >> b;
		std::cout << "Input angles of isosceles triangle (A,B): ";
		std::cin >> A >> B;
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
		A = B = C = 60;
	}

	void set_figure() override
	{
		n = 3;
		std::cout << "Input the side of equilateral triangle (a): ";
		std::cin >> a;
		b = c = a;
	}
};

class Quadrilateral
{
protected:
	int n;
	std::string name;
	std::string right_figure;
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int A = 0;
	int B = 0;
	int C = 0;
	int D = 0;

public:
	Quadrilateral()
	{
		name = "Quadrilateral";
	}

	virtual void get_figure()
	{
		std::cout << name << ":\n";
		std::cout << right_figure << "\n";
		std::cout << n << "\n";
		std::cout << "Sides: a = " << a << ", b = " << b << ", c = " << c << ", d = " << d << "\n";
		std::cout << "Angles: A = " << A << ", B = " << B << ", C = " << C << ", D = " << D << "\n";
	}

	virtual void set_figure()
	{
		n = 4;
		std::cout << "Input sides of quadrilateral (a,b,c,d): ";
		std::cin >> a >> b >> c >> d;
		std::cout << "Input angles of quadrilateral (A,B,C,D): ";
		std::cin >> A >> B >> C >> D;
	}

	virtual void figure_right()
	{
		((n==4 && (A + B + C + D) == 360) ? right_figure = "Right figure" : right_figure = "Wrong figure");
	}
};

class Rectangular : public Quadrilateral
{
public:
	Rectangular()
	{
		name = "Rectangular";
		A = B = C = D = 90;
	}

	void set_figure() override
	{
		n = 4;
		std::cout << "Input sides of rectangular (a,b): ";
		std::cin >> a >> b;
		c = a;
		d = b;
	}
};

class Square : public Quadrilateral
{
public:
	Square()
	{
		name = "Square";
		A = B = C = D = 90;
	}

	void set_figure() override
	{
		n = 4;
		std::cout << "Input the side of square (a): ";
		std::cin >> a;
		b = c = d = a;
	}
};

class Parallelogram : public Quadrilateral
{
public:
	Parallelogram()
	{
		name = "Parallelogram";
	}

	void set_figure() override
	{
		n = 4;
		std::cout << "Input sides of parallelogram (a,b): ";
		std::cin >> a >> b;
		c = a;
		d = b;
		std::cout << "Input angles of parallelogram (A,B): ";
		std::cin >> A >> B;
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
	}

	void set_figure() override
	{
		n = 4;
		std::cout << "Input the side of rhombus (a): ";
		std::cin >> a;
		b = c = d = a;
		std::cout << "Input angles of rhombus (A,B): ";
		std::cin >> A >> B;
		C = A;
		D = B;
	}
};

int main()
{
	int choice;
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
		std::cin >> choice;
		switch (choice)
		{
		case 1:
		{
			Triangle* figure1 = new Triangle;
			figure1->set_figure();
			figure1->figure_right();
			figure1->get_figure();
			delete figure1;
		}
			break;
		case 2:
		{
			RightTriangle* figure2 = new RightTriangle;
			Triangle* pfigure2 = &(*figure2);
			pfigure2->set_figure();
			pfigure2->figure_right();
			pfigure2->get_figure();
			delete figure2;
		}
			break;
		case 3:
		{
			IsoscelesTriangle* figure3 = new IsoscelesTriangle;
			Triangle* pfigure3 = &(*figure3);
			pfigure3->set_figure();
			pfigure3->figure_right();
			pfigure3->get_figure();
			delete figure3;
		}
			break;
		case 4:
		{
			EquilateralTriangle* figure4 = new EquilateralTriangle;
			Triangle* pfigure4 = &(*figure4);
			pfigure4->set_figure();
			pfigure4->figure_right();
			pfigure4->get_figure();
			delete figure4;
		}
			break;
		case 5:
		{
			Quadrilateral* figure5 = new Quadrilateral;
			figure5->set_figure();
			figure5->figure_right();
			figure5->get_figure();
			delete figure5;
		}
			break;
		case 6:
		{
			Rectangular* figure6 = new Rectangular;
			Quadrilateral* pfigure6 = &(*figure6);
			pfigure6->set_figure();
			pfigure6->figure_right();
			pfigure6->get_figure();
			delete figure6;
		}
			break;
		case 7:
		{
			Square* figure7 = new Square;
			Quadrilateral* pfigure7 = &(*figure7);
			pfigure7->set_figure();
			pfigure7->figure_right();
			pfigure7->get_figure();
			delete figure7;
		}
			break;
		case 8:
		{
			Parallelogram* figure8 = new Parallelogram;
			Quadrilateral* pfigure8 = &(*figure8);
			pfigure8->set_figure();
			pfigure8->figure_right();
			pfigure8->get_figure();
			delete figure8;
		}
			break;
		case 9:
		{
			Rhombus* figure9 = new Rhombus;
			Quadrilateral* pfigure9 = &(*figure9);
			pfigure9->set_figure();
			pfigure9->figure_right();
			pfigure9->get_figure();
			delete figure9;
		}
			break;
		default:
		{
			Figure* figure = new Figure;
			figure->set_figure();
			figure->figure_right();
			figure->get_figure();
			delete figure;
		}
			break;
		}

		std::cout << "If you want to exit enter 1: ";
		std::cin >> numb;
		(numb == 1 ? exit = false : exit);
	}
	return 0;
}