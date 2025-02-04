#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap a("A.I. Pacino");
    ClapTrap o("Robot DeNiro");

    a.setAttackDamage(5);
    a.attack(o.getName());
    o.takeDamage(a.getAttackDamage());
    o.beRepaired(2);
    o.beRepaired(2);
    o.attack(a.getName());
    o.setAttackDamage(7);
    o.attack(a.getName());
    a.takeDamage(o.getAttackDamage());
    a.beRepaired(2);
    o.attack(a.getName());
    a.takeDamage(o.getAttackDamage());
    a.beRepaired(2);
    o.attack(a.getName());
    a.takeDamage(o.getAttackDamage());
}