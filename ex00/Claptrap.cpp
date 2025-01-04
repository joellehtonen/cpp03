#include "Claptrap.hpp"

Claptrap::Claptrap () {
    std::cout << "A default claptrap is made!" << std::endl;
};
Claptrap::~Claptrap () {
    std::cout << "Claptrap " << getName() << " is destroyed!" << std::endl;
};
Claptrap::Claptrap(const Claptrap& copy) : _name(copy._name) {
    std::cout << "A copy claptrap is copied from " << getName() << " !" << std::endl;
};
Claptrap& Claptrap::operator=(const Claptrap& source) {
    std::cout << "A copy claptrap is assigned from the spare parts of " << getName() << " !" << std::endl;
    this->_name = source._name;
    return (*this);
}

Claptrap::Claptrap (std::string name) : _hitPoints(10), _energyPoints(10), _attackDamage(0) {
    std::cout << "Claptrap " << getName() << " is made!" << std::endl;
};
void    Claptrap::attack(const std::string& target)
{

    std::cout << "Claptrap " << this->getName() << "attacks " << target << ", causing " << getAttackDamage() << " points of damage!" << std::endl;
};
void    Claptrap::takeDamage(unsigned int amount)
{

};
void    Claptrap::beRepaired(unsigned int amount)
{
    if (this->_hitPoints > 0 && this->_energyPoints > 0)
    {
        std::cout << "Claptrap " << getName() << " fixes itself! It is getting " << amount << " hitpoints back, to a total of " << getHitPoints() << " hp!" << std::endl;
    }
    else
        std::cout << "Claptrap " << getName() << " has malfunctioned, unable to repair itself anymore!" << std::endl;
};

std::string     Claptrap::getName(void) const {
    return (this->_name);
}
unsigned int    Claptrap::getAttackDamage(void) const {
    return (this->_attackDamage);
}
unsigned int    Claptrap::getHitPoints(void) const {
    return (this->_hitPoints);
}
unsigned int    Claptrap::getEnergyPoints(void) const {
    return (this->_energyPoints);
}
void            Claptrap::setEnergyPoints(void) {
    if (this->_energyPoints > 0)
        this->_energyPoints -= 1;
};


