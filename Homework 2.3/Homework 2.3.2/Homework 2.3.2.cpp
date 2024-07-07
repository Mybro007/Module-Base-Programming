#include<iostream>
#include<fstream>
#include<string>

class Adress
{
	public:
		Adress() = default;
		std::string city;
	private:
		std::string street;
		std::string house;
		std::string flat;
	public:
		void set_adress(std::ifstream& in)
		{
			in >> city;
			in >> street;
			in >> house;
			in >> flat;
		}

		void out_adress(std::ofstream& out)
		{
			out << city << ", " << street << ", " << house << ", " << flat << "\n";
		}
};

void sort(Adress* adress, int n)
{
	for (int top = 0; top < n; ++top)
	{
		for (int seek = top + 1; seek < n; ++seek)
		{
			if ((adress[top].city > adress[seek].city))
			{
				std::swap(adress[top], adress[seek]);
			}
		}
	}
}

int main()
{
	std::ifstream in("in.txt");
	if (in.is_open())
	{
		int n;
		in >> n;
		std::ofstream out("out.txt");
		if (out.is_open())
		{
			out << n << "\n";
			Adress* adress = new Adress[n];
			for (int i = 0; i < n; ++i)
			{
				adress[i].set_adress(in);
			}
			sort(adress, n);
			for (int i = 0; i < n; ++i)
			{
				adress[i].out_adress(out);
			}
			delete[] adress;
			in.close();
			out.close();
			return 0;
		}
		else
		{
			std::cout << "Output file was not found!!!\n";
			return -1;
		}

	}
	else
	{
		std::cout << "Input file was not found!!!\n";
		return -1;
	}
}