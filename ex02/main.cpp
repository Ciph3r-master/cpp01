#include <iostream>

int	main(void)
{
	std::string string = "HI THIS IS BRAIN";
	std::string	*stringPTR = &string;
	std::string	&stringREF = string;

	std::cout << "Memory address of string: " << &string << "\n";
	std::cout << "Memory address of stringPTR: " << stringPTR << "\n";
	std::cout << "Memory address of stringREF: " << &stringREF << "\n";

	std::cout << "Value of string: " << string << "\n";
	std::cout << "Value of stringPTR: " << *stringPTR << "\n";
	std::cout << "Value of stringREF: " << stringREF << "\n";

	string = "HI THIS IS NOT BRAIN";

	std::cout << "New value of string: " << string << "\n";
	std::cout << "New value of stringPTR: " << *stringPTR << "\n";
	std::cout << "New value of stringREF: " << stringREF << "\n";

	return (0);
}