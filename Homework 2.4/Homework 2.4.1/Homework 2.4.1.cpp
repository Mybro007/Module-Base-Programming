#include<iostream>
#include<string>

class Figure
{
	protected:
		std::string name;
		int sides_count;
	public:
		Figure()
		{
			name = "Figure";
			sides_count = 0;
		}

		void get_sides_count(int sides_count)
		{
			std::cout << sides_count << "\n";
		}

		void get_figure_name(std::string name)
		{
			std::cout << name << ": ";
		}

		void get_info()
		{
			get_figure_name(name);
			get_sides_count(sides_count);
		}
};

class Triangle : public Figure
{
	public:
		Triangle()
		{
			name = "Triangle";
			sides_count = 3;
		}
};

class Square : public Figure
{
	public:
		Square()
		{
			name = "Square";
			sides_count = 4;
		}
};

int main()
{
	std::cout << "Number of side: \n\n";
	for (int i = 0; i < 3; ++i)
	{
		std::cout << "Input the name of figure: ";
		std::string* figure = new std::string;
		std::cin >> *figure;
		if (*figure == "triangle")
		{
			Triangle* fig = new Triangle;
			fig->get_info();
			delete fig;
		}
		else if (*figure == "square")
		{
			Square* fig = new Square;
			fig->get_info();
			delete fig;
		}
		else
		{
			Figure* fig = new Figure;
			fig->get_info();
			delete fig;
		}
	}
	
	return 0;
}