#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "A default FragTrap is born!" << std::endl;
};

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	_name = name;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "A new FragTrap called " << getName() << " is made from scrap!" << std::endl;
};

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << getName() << " is reduced to rubble!" << std::endl;
};

FragTrap::FragTrap(const FragTrap& copy) : ClapTrap()
{
	*this = copy;
	std::cout << "FragTrap " << getName() << "is being copied!" << std::endl;
};

FragTrap& FragTrap::operator=(const FragTrap& source) {
	this->_name = source._name;
    this->_attackDamage = source._attackDamage;
    this->_hitPoints = source._hitPoints;
    this->_energyPoints = source._energyPoints;
	std::cout << "FragTrap " << getName() << " is made from the pieces of another machine!" << std::endl;
	return *this;
};

void FragTrap::highFivesGuys(void)
{
	if (getHitPoints() > 0)
		std::cout << "FragTrap " << getName() << " is happy and wants to high-five everyone!" << std::endl;
	else
		std::cout << "FragTrap " << getName() << " really wants a high-five, but cannot lift its dislocated arm..." << std::endl;
};
