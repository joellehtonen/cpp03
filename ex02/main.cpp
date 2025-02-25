#include "FragTrap.hpp"

int main(void)
{
    FragTrap a("James Androidfini");
    FragTrap o("Dustin Bottman");

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