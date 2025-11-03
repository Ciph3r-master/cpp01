#include "Zombie.hpp"
#include <string>
#include <iostream>

Zombie *zombieHorde(int N, std::string name)
{
	if (N <= 0)
		throw std::invalid_argument("N must be greater than 0");

	Zombie *zombie = new Zombie[N];

	for(int i = 0; i < N; i++)
		zombie[i] = Zombie(name);
	return (zombie);
}