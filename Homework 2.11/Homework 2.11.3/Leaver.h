#pragma once

#include<string>
#include<iostream>

namespace LeaveLib
{
	class Leaver
	{
	private:
		std::string name;
	public:
		Leaver(std::string name);

		void leave();
	};
}