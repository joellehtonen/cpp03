#pragma once
#include <string>
#include <iostream>

class Claptrap
{
    private:
        std::string     _name;
        unsigned int    _hitPoints;
        unsigned int    _energyPoints;
        unsigned int    _attackDamage;

    public:
        Claptrap();
        ~Claptrap();
        Claptrap(const Claptrap &copy);
        Claptrap& operator=(const Claptrap &source);

        Claptrap(std::string _name);
        void    attack(const std::string& target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);

        std::string    getName(void) const;
        unsigned int   getHitPoints(void) const;
        unsigned int   getEnergyPoints(void) const;
        unsigned int   getAttackDamage(void) const;

        void           setHitpoints(void);
        void           setEnergyPoints(void);
};