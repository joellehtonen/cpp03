#pragma once
#include <string>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
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