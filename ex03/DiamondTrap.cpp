#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ScavTrap(), FragTrap() {
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
	std::cout << "A default DiamondTrap is born!" << std::endl;
};

DiamondTrap::DiamondTrap(std::string name) 
	: ClapTrap(name + "_clap_name"),
	// ScavTrap(name + "_scav_name"), 
	// FragTrap(name + "_frag_name"), 
	_name(name) 
{
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_defaultEnergyPoints;
	_attackDamage = FragTrap::_attackDamage;
	std::cout << "DiamondTrap " << this->_name << " is born!" << std::endl;
};

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap " << this->_name << " is nothing but ash!" << std::endl;
};

DiamondTrap::DiamondTrap(const DiamondTrap& copy) : ClapTrap(), ScavTrap(), FragTrap() {
	*this = copy;
	std::cout << "DiamondTrap copies itself from " << copy.getName() << std::endl;
};

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& source) {
	this->_name = source._name;
    this->_attackDamage = source._attackDamage;
    this->_hitPoints = source._hitPoints;
    this->_energyPoints = source._energyPoints;
	std::cout << "DiamondTrap copies itself, piece by piece, from " << source.getName() << std::endl;
	return *this;
};

void DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap " << this->_name << ", born of " << ClapTrap::_name << " is here!" << std::endl;
};