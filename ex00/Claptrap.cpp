#include "Claptrap.hpp"

Claptrap::Claptrap () : _name("Default"), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
    std::cout << "A default claptrap is made!" << std::endl;
};

Claptrap::Claptrap (std::string name) : _hitPoints(10), _energyPoints(10), _attackDamage(0) {
    this->_name = name;
    std::cout << "Claptrap " << getName() << " is made!" << std::endl;
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

void    Claptrap::attack(const std::string& target)
{
    unsigned int    hitPoints = getHitPoints();
    unsigned int    energyPoints = getEnergyPoints();

    if (hitPoints > 0 && energyPoints > 0)
    {   
        decrementEnergyPoints();
        // attack somehow
        std::cout << "Claptrap " << getName() << " attacks " << target << ", causing " << getAttackDamage() << " points of damage!" << std::endl;
    }
    else
        std::cout << "Claptrap " << getName() << " malfunctioned, unable to attack anymore!" << std::endl;    
};
void    Claptrap::takeDamage(unsigned int amount)
{
    unsigned int    hitPoints = getHitPoints();
        if (hitPoints > 0)
        {
            setHitpoints(-amount);
            std::cout << "Claptrap " << getName() << " suffers " << amount << " damage! It hurts!" << std::endl;
        }
        else
            std::cout << "Claptrap " << getName() << " is already broken. No use in hitting it anymore..." << std::endl;
};
void    Claptrap::beRepaired(unsigned int amount)
{
    if (this->_hitPoints > 0 && this->_energyPoints > 0)
    {
        decrementEnergyPoints();
        setHitpoints(+amount);
        std::cout << "Claptrap " << getName() << " fixes itself! It's getting " << amount << " hitpoints back, to a total of " << getHitPoints() << " hp!" << std::endl;
    }
    else
        std::cout << "Claptrap " << getName() << " malfunctioned, unable to repair itself anymore!" << std::endl;
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
void            Claptrap::setHitpoints(int amount) {
    this->_hitPoints += amount;
}
void            Claptrap::setAttackDamage(int amount) {
    this->_attackDamage += amount;
    std::cout << "Claptrap " << getName() << " increases its attack damage by " << amount << "!" << std::endl;
};
void            Claptrap::decrementEnergyPoints(void) {
    if (this->_energyPoints > 0)
        this->_energyPoints -= 1;
};


