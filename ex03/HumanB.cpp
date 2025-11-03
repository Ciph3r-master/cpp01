#include "HumanB.hpp"
#include "Weapon.hpp"

#include <iostream>

HumanB::HumanB(std::string name)
{
	this->_name = name;
}

HumanB::~HumanB()
{

}

void HumanB::setWeapon(Weapon *weapon)
{
	_weapon = weapon;
}

void HumanB::attack()
{
	if (_weapon == NULL)
	{
		std::cout << this->_name + " " << "has no weapon." << std::endl;
		return ;
	}
	std::cout << this->_name + " " << "attacks with their " 
	<< _weapon->getType() + "." << std::endl;
}