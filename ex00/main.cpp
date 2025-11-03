#include <iostream>
#include "Zombie.hpp"

int	main(void)
{

	Zombie *zombie;

	zombie = newZombie("Carlos");
	randomChump("Bernard");

	zombie->announce();
	delete zombie;
	return (0);
}