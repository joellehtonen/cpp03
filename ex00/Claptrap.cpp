#include "Claptrap.hpp"

Claptrap::Claptrap () : _name("Default"), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
    std::cout << "A default claptrap is made!" << std::endl;
};

Claptrap::Claptrap (std::string name) : _hitPoints(10), _energyPoints(10), _attackDamage(0) {
    this->_name = name;
    std::cout << "Claptrap " << getName() << " is turned on!" << std::endl;
};

Claptrap::~Claptrap () {
    std::cout << "Claptrap " << getName() << " is turned off!" << std::endl;
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
        if (getHitPoints() > 0)
        {
            setHitpoints(-amount);
            std::cout << "Claptrap " << getName() << " suffers " << amount << " damage! It hurts! ";
            if (getHitPoints() > 0)
                std::cout << "It only has " << getHitPoints() << " hit points remaining!" << std::endl;
        else
            std::cout << getName() << " is completely broken to pieces!" << std::endl;
        }
        else
            std::cout << "But " << getName() << " is already broken. No use in hitting it anymore..." << std::endl;
};
void    Claptrap::beRepaired(unsigned int amount)
{
    if (getHitPoints() > 0 && getEnergyPoints() > 0)
    {
        decrementEnergyPoints();
        setHitpoints(+amount);
        std::cout << "Claptrap " << getName() << " fixes itself! It's getting " << amount << " hit points back, to a total of " << getHitPoints() << " hp!" << std::endl;
    }
    else
        std::cout << "Claptrap " << getName() << " malfunctioned, unable to repair itself anymore!" << std::endl;
};

std::string     Claptrap::getName(void) const {
    return (this->_name);
}
int    Claptrap::getAttackDamage(void) const {
    return (this->_attackDamage);
}
int    Claptrap::getHitPoints(void) const {
    return (this->_hitPoints);
}
int    Claptrap::getEnergyPoints(void) const {
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


