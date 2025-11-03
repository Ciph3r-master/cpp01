#include "Harl.hpp"

#include <iostream>

Harl::Harl()
{
	table[0].level = "DEBUG";
	table[0].func = &Harl::debug;
	table[1].level = "INFO";
	table[1].func = &Harl::info;
	table[2].level = "WARNING";
	table[2].func = &Harl::warning;
	table[3].level = "ERROR";
	table[3].func = &Harl::error;
}

Harl::~Harl()
{
}


void	Harl::complain(std::string level)
{
	for (int i = 0; i < 4; i++)
	{
		if (table[i].level == level)
			(this->*table[i].func)();
	}
}

void	Harl::debug()
{
	std::cout << "[DEBUG]" << std::endl;
	std::cout << "This a debug message" << std::endl;
}

void	Harl::info()
{
	std::cout << "[INFO]" << std::endl;
	std::cout << "This an info message" << std::endl;
}

void	Harl::warning()
{
	std::cout << "[WARNING]" << std::endl;
	std::cout << "This a warning message" << std::endl;
}

void	Harl::error()
{
	std::cout << "[ERROR]" << std::endl;
	std::cout << "This an error message" << std::endl;
}