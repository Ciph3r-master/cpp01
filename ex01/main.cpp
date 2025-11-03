#include <iostream>
#include "Zombie.hpp"

int	main(void)
{

	Zombie *zombie;
	int	N = 10;

	try {
		zombie = zombieHorde(N, "Jean");
		for (int i = 0; i < N; i++)
		{
			std::cout << i << ": ";
			zombie[i].announce();
		}
		delete[] zombie;
	}
	catch (const std::invalid_argument &e)
	{
		std::cerr << "Error : " << e.what() << std::endl;
	}
	return (0);
}