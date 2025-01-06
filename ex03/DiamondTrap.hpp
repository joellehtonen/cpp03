#pragma once
#include <string>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap: public FragTrap, ScavTrap
{
	private:
		std::string 	_name;
		int				_hitPoints;
		int				_energyPoints;
		int				_attackDamage;
		ClapTrap::name 


	public:
		DiamondTrap();
		~DiamondTrap();
		DiamondTrap(const DiamondTrap& copy);
		DiamondTrap &operator=(const DiamondTrap& source);
		ScavTrap::attack();

		void whoAmI();


};