#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap a("Marl-ON Brand:0");
    ScavTrap o("Jack Nickel-50-N");

    a.attack(o.getName());
    o.takeDamage(a.getAttackDamage());
    o.beRepaired(5);
    o.guardGate();
    o.attack(a.getName());
    a.takeDamage(o.getAttackDamage());
    a.beRepaired(5);
    o.attack(a.getName());
    a.takeDamage(o.getAttackDamage());
    o.setAttackDamage(100);
    o.attack(a.getName());
    a.takeDamage(o.getAttackDamage());
    a.guardGate();
    o.guardGate();
}