#pragma once
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:
                bool    _guarding;

	public:
                ScavTrap();
		ScavTrap(std::string _name);
                ~ScavTrap();
                ScavTrap(const ScavTrap &copy);
                ScavTrap& operator=(const ScavTrap &source);

                void    attack(const std::string& target) override;
                void    guardGate();
};