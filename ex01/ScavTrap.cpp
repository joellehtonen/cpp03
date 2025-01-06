#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{   
    _name = "Default";
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    _guarding = false;
    std::cout << "A default ScavTrap is made!" << std::endl;
};

ScavTrap::ScavTrap (std::string name) : ClapTrap(name)
{ 
    _name = name;
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    _guarding = false;
    std::cout << "ScavTrap " << getName() << " is initialized!" << std::endl;
};

ScavTrap::~ScavTrap () {
    std::cout << "ScavTrap " << getName() << " powers off!" << std::endl;
};

ScavTrap::ScavTrap(const ScavTrap& copy) : ClapTrap() {
    *this = copy;
    std::cout << "A copy ScavTrap is copied from " << copy.getName() << " !" << std::endl;
};

ScavTrap& ScavTrap::operator=(const ScavTrap& source) {
    this->_name = source._name;
    this->_attackDamage = source._attackDamage;
    this->_hitPoints = source._hitPoints;
    this->_energyPoints = source._energyPoints;
    std::cout << "A copy ScavTrap is built from the spare parts of " << source.getName() << " !" << std::endl;
    return (*this);
}

void    ScavTrap::attack(const std::string& target)
{
    if (getHitPoints() > 0 && getEnergyPoints() > 0)
    {   
        decrementEnergyPoints();
        std::cout << "ScavTrap " << getName() << " mauls " << target << " with its robot arms, causing " << getAttackDamage() << " points of damage!" << std::endl;
    }
    else
        std::cout << "ScavTrap " << getName() << " is not working, it is unable to attack anymore!" << std::endl;    
};

void    ScavTrap::guardGate()
{
    if (getHitPoints() <= 0)
    {
        std::cout << "ScavTrap " << getName() << " cannot guard the gate, it is utterly broken." << std::endl;
        return ;
    }
    if (_guarding == false)
        std::cout << "ScavTrap " << getName() << " is now guarding the gate with its life! No one shall pass!" << std::endl;
    else if (_guarding == true)
        std::cout << "ScavTrap " << getName() << " stands down. There is no need to guard the gate anymore." << std::endl;
    this->_guarding = !_guarding;
}
