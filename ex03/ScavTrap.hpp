#pragma once
#include <string>
#include "ClapTrap.hpp"
#define ST_DEFAULT_HIT_POINTS 100
#define ST_DEFAULT_ATTACK_DAMAGE 20
#define ST_DEFAULT_ENERGY_POINTS 50

class ScavTrap : virtual public ClapTrap
{
        protected:
                bool    _guarding;
                int     _defaultEnergyPoints;
 
	public:
                ScavTrap();
		ScavTrap(std::string _name);
                ~ScavTrap();
                ScavTrap(const ScavTrap &copy);
                ScavTrap& operator=(const ScavTrap &source);

                void    attack(const std::string& target) override;
                void    guardGate();
};