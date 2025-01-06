#pragma once
#include <string>
#include <iostream>

class ClapTrap
{
    private:
        std::string     _name;
        int             _hitPoints;
        int             _energyPoints;
        int             _attackDamage;

    public:
        ClapTrap();
        ~ClapTrap();
        ClapTrap(const ClapTrap &copy);
        ClapTrap& operator=(const ClapTrap &source);

        ClapTrap(std::string _name);
        void    attack(const std::string& target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);

        std::string    getName(void) const;
        int   getHitPoints(void) const;
        int   getEnergyPoints(void) const;
        int   getAttackDamage(void) const;

        void           setHitpoints(int amount);
        void           setAttackDamage(int amount);
        void           decrementEnergyPoints(void);
};