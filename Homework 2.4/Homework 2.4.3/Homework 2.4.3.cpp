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

private:
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

public:
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
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int A = 0;
	int B = 0;
	int C = 0;
	int D = 0;

private:
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

public:
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
			Triangle* figure = new Triangle;
			Figure* pfigure = &(*figure);
			figure->get_info();
			delete figure;
		}
			break;
		case 2:
		{
			RightTriangle* figure = new RightTriangle;
			Figure* pfigure = &(*figure);
			pfigure->get_info();
			delete figure;
		}
			break;
		case 3:
		{
			IsoscelesTriangle* figure = new IsoscelesTriangle;
			Figure* pfigure = &(*figure);
			pfigure->get_info();
			delete figure;
		}
			break;
		case 4:
		{
			EquilateralTriangle* figure = new EquilateralTriangle;
			Figure* pfigure = &(*figure);
			pfigure->get_info();
			delete figure;
		}
			break;
		case 5:
		{
			Quadrilateral* figure = new Quadrilateral;
			Figure* pfigure = &(*figure);
			pfigure->get_info();
			delete figure;
		}
			break;
		case 6:
		{
			Rectangular* figure = new Rectangular;
			Figure* pfigure = &(*figure);
			pfigure->get_info();
			delete figure;
		}
			break;
		case 7:
		{
			Square* figure = new Square;
			Figure* pfigure = &(*figure);
			pfigure->get_info();
			delete figure;
		}
			break;
		case 8:
		{
			Parallelogram* figure = new Parallelogram;
			Figure* pfigure = &(*figure);
			pfigure->get_info();
			delete figure;
		}
			break;
		case 9:
		{
			Rhombus* figure = new Rhombus;
			Figure* pfigure = &(*figure);
			pfigure->get_info();
			delete figure;
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