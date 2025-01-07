#include "DiamondTrap.hpp"

int main(void)
{
    DiamondTrap a("Bruce Spring-Steel");
    DiamondTrap o("Neil Gun");

    a.whoAmI();
    a.attack(o.getName());
    o.takeDamage(a.getAttackDamage());
    o.beRepaired(5);
    o.attack(a.getName());
    a.takeDamage(o.getAttackDamage());
    a.beRepaired(10);
    o.guardGate();
    o.setAttackDamage(100);
    o.attack(a.getName());
    a.takeDamage(o.getAttackDamage());
    a.highFivesGuys();
    o.guardGate();
    o.highFivesGuys();
    o.whoAmI();
}

// int	main(void) {
// 	std::string diamondTrapName = "DT-XXY";
// 	std::string scavTrapName = "SCVT-2000";
// 	std::string clapTrapName = "CT-42";

// 	DiamondTrap	diamondTrap(diamondTrapName);
// 	ScavTrap	scavTrap(scavTrapName);
// 	ClapTrap	clapTrap(clapTrapName);

// 	diamondTrap.whoAmI();
// 	clapTrap.attack(scavTrapName);
// 	scavTrap.takeDamage(clapTrap.getAttackDamage());
// 	scavTrap.attack(clapTrapName);
// 	clapTrap.takeDamage(scavTrap.getAttackDamage());
// 	diamondTrap.attack(scavTrapName);
// 	scavTrap.takeDamage(diamondTrap.getAttackDamage());
// 	diamondTrap.highFivesGuys();
// 	diamondTrap.guardGate();
// 	diamondTrap.takeDamage(5000);
// 	diamondTrap.beRepaired(5000);
// 	diamondTrap.whoAmI();
// 	return (0);
// }