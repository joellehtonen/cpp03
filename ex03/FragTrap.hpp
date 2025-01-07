#pragma once
#include <string>
#include "ClapTrap.hpp"
#define FT_DEFAULT_HIT_POINTS 100
#define FT_DEFAULT_ATTACK_DAMAGE 30
#define FT_DEFAULT_ENERGY_POINTS 100

class FragTrap : virtual public ClapTrap
{
	private:

	public:
		FragTrap();
		FragTrap(std::string name);
		~FragTrap();
		FragTrap(const FragTrap& copy);
		FragTrap& operator=(const FragTrap& source);

		void highFivesGuys(void);
};