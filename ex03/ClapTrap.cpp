#include "ClapTrap.hpp"

ClapTrap::ClapTrap () : _name("Default"), _hitPoints(100), _energyPoints(50), _attackDamage(20) {
    std::cout << "A default ClapTrap is made!" << std::endl;
};

ClapTrap::ClapTrap (std::string name) : _hitPoints(100), _energyPoints(50), _attackDamage(20) {
    this->_name = name;
    std::cout << "ClapTrap " << getName() << " is turned on!" << std::endl;
};

ClapTrap::~ClapTrap () {
    std::cout << "ClapTrap " << getName() << " is turned off!" << std::endl;
};

ClapTrap::ClapTrap(const ClapTrap& copy) {
    *this = copy;
    std::cout << "A copy ClapTrap is copied from " << copy.getName() << " !" << std::endl;
};

ClapTrap& ClapTrap::operator=(const ClapTrap& source) {
    this->_name = source._name;
    this->_attackDamage = source._attackDamage;
    this->_hitPoints = source._hitPoints;
    this->_energyPoints = source._energyPoints;
    std::cout << "A copy ClapTrap is assigned from the spare parts of " << source.getName() << " !" << std::endl;
    return (*this);
}

void    ClapTrap::attack(const std::string& target)
{
    unsigned int    hitPoints = getHitPoints();
    unsigned int    energyPoints = getEnergyPoints();

    if (hitPoints > 0 && energyPoints > 0)
    {   
        decrementEnergyPoints();
        // attack somehow
        std::cout << "ClapTrap " << getName() << " attacks " << target << ", causing " << getAttackDamage() << " points of damage!" << std::endl;
    }
    else
        std::cout << "ClapTrap " << getName() << " malfunctioned, unable to attack anymore!" << std::endl;    
};
void    ClapTrap::takeDamage(unsigned int amount)
{
        if (getHitPoints() > 0)
        {
            setHitpoints(-amount);
            std::cout << "ClapTrap " << getName() << " suffers " << amount << " damage! It hurts! ";
            if (getHitPoints() > 0)
                std::cout << "It only has " << getHitPoints() << " hit points remaining!" << std::endl;
        else
            std::cout << getName() << " is completely broken to pieces!" << std::endl;
        }
        else
            std::cout << "But " << getName() << " is already broken. No use in hitting it anymore..." << std::endl;
};
void    ClapTrap::beRepaired(unsigned int amount)
{
    if (getHitPoints() > 0 && getEnergyPoints() > 0)
    {
        decrementEnergyPoints();
        setHitpoints(+amount);
        std::cout << "ClapTrap " << getName() << " fixes itself! It's getting " << amount << " hit points back, to a total of " << getHitPoints() << " hp!" << std::endl;
        std::cout << "But its energy points also decrease to " << this->_energyPoints << "!" << std::endl;
    }
    else
        std::cout << "ClapTrap " << getName() << " malfunctioned, unable to repair itself anymore!" << std::endl;
};

std::string     ClapTrap::getName(void) const {
    return (this->_name);
}
int    ClapTrap::getAttackDamage(void) const {
    return (this->_attackDamage);
}
int    ClapTrap::getHitPoints(void) const {
    return (this->_hitPoints);
}
int    ClapTrap::getEnergyPoints(void) const {
    return (this->_energyPoints);
}
void            ClapTrap::setHitpoints(int amount) {
    this->_hitPoints += amount;
}
void            ClapTrap::setAttackDamage(int amount) {
    this->_attackDamage = amount;
    std::cout << "ClapTrap " << getName() << " increases its attack damage to " << amount << "!" << std::endl;
};
void            ClapTrap::decrementEnergyPoints(void) {
    if (this->_energyPoints > 0)
        this->_energyPoints -= 1;
};


