#include "FragTrap.hpp"

int main(void)
{
    FragTrap a("X");
    FragTrap o("Y");

    a.attack(o.getName());
    o.takeDamage(a.getAttackDamage());
    o.beRepaired(5);
    o.attack(a.getName());
    a.takeDamage(o.getAttackDamage());
    a.beRepaired(10);
    o.setAttackDamage(100);
    o.attack(a.getName());
    a.takeDamage(o.getAttackDamage());
    a.highFivesGuys();
    o.highFivesGuys();
}