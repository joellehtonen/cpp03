#include "Claptrap.hpp"

int main(void)
{
    Claptrap a("Alpack Chino");
    Claptrap o("Oh Mega");

    a.setAttackDamage(5);
    a.attack(o.getName());
    o.takeDamage(a.getAttackDamage());
    o.beRepaired(2);
    o.beRepaired(2);
    o.attack(a.getName());
    a.setAttackDamage(7);
    o.attack(a.getName());
    a.takeDamage(o.getAttackDamage());
    a.beRepaired(2);
    o.attack(a.getName());
    a.takeDamage(o.getAttackDamage());
    a.beRepaired(2);
}