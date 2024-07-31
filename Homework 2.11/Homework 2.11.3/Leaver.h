#pragma once

#ifdef LEAVERLIB_EXPORTS
#define LEAVERLIB_API __declspec(dllexport)
#else
#define LEAVERLIB_API __declspec(dllimport)
#endif

#include<string>
#include<iostream>

namespace LeaveLib
{
	class Leaver
	{
	private:
		std::string name;
	public:
		LEAVERLIB_API Leaver(std::string name);

		LEAVERLIB_API void leave();
	};
}