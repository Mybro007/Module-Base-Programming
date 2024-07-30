#pragma once

#include<string>
#include<iostream>

namespace GreetingLib
{
	class Greeting
	{
	private:
		std::string name;
	public:
		Greeting(std::string name);

		void greet();
	};
}