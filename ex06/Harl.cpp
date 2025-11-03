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

int	Harl::_stringToEnum(std::string str)
{
	if (str == "DEBUG")
		return (DEBUG);
	if (str == "INFO")
		return (INFO);
	if (str == "WARNING")
		return (WARNING);
	if (str == "ERROR")
		return (ERROR);
	return (UNKNOWN);
}

void	Harl::complain(std::string level)
{
	switch (_stringToEnum(level))
	{
		case DEBUG:
			debug();
		case INFO:
			info();
		case WARNING:
			warning();
		case ERROR:
			error();
			break;
		default:
			unknown();
			break;
	}
}

void	Harl::debug()
{
	std::cout << "[DEBUG]" << std::endl;
	std::cout << "This is a debug message" << std::endl;
}

void	Harl::info()
{
	std::cout << "[INFO]" << std::endl;
	std::cout << "This is an info message" << std::endl;
}

void	Harl::warning()
{
	std::cout << "[WARNING]" << std::endl;
	std::cout << "This is a warning message" << std::endl;
}

void	Harl::error()
{
	std::cout << "[ERROR]" << std::endl;
	std::cout << "This is an error message" << std::endl;
}

void	Harl::unknown()
{
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}