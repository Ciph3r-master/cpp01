#include "Harl.hpp"
#include <iostream>

int	main(int ac, char **av)
{
	Harl harl;

	if (ac != 2)
	{
		std::cout << "Usage : ./harl <print_level>" << std::endl;
		return (1);
	}
	harl.complain(av[1]);
	return (0);
}