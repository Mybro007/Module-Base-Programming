#include<iostream>
#include<string>

class Figure
{
	protected:
		std::string figure;
		int n;
	public:
		void get_figure(std::string figure = "Фигура", int n = 0)
		{
			std::cout << figure << ": " << n << "\n";
		}
};

class Triangle : public Figure
{
	public:
		Triangle()
		{
			figure = "Triangle";
			n = 3;
			get_figure(figure, n);
		}
};

class Square : public Figure
{
	public:
		Square()
		{
			figure = "Square";
			n = 4;
			get_figure(figure, n);
		}
};

int main()
{
	setlocale(LC_ALL, "rus");
	std::cout << "Number of size: \n\n";
	for (int i = 0; i < 3; ++i)
	{
		std::cout << "Input the name of figure: ";
		std::string* figure = new std::string;
		std::cin >> *figure;
		if (*figure == "triangle")
		{
			Triangle* fig = new Triangle;
			delete fig;
		}
		else if (*figure == "square")
		{
			Square* fig = new Square;
			delete fig;
		}
		else
		{
			Figure* fig = new Figure;
			fig->get_figure();
			delete fig;
		}
	}
	
	return 0;
}