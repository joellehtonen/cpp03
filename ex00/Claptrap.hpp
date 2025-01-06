#pragma once
#include <string>
#include <iostream>

class Claptrap
{
    private:
        std::string     _name;
        int    _hitPoints;
        int    _energyPoints;
        uint    _attackDamage;

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
        int   getHitPoints(void) const;
        int   getEnergyPoints(void) const;
        int   getAttackDamage(void) const;

        void           setHitpoints(int amount);
        void           setAttackDamage(int amount);
        void           decrementEnergyPoints(void);
};