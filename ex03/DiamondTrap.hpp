#pragma once
#include <string>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
	private:
		std::string 	_name;
	
	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		~DiamondTrap();
		DiamondTrap(const DiamondTrap& copy);
		DiamondTrap &operator=(const DiamondTrap& source);
		using ScavTrap::attack;

		void whoAmI();
};