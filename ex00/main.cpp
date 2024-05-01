#include "ClapTrap.hpp"

int main()
{
    ClapTrap clapTrap("ClapTrap");
    ClapTrap clapTrap2(clapTrap);
    ClapTrap clapTrap3 = clapTrap;

    clapTrap.attack("target");
    clapTrap.takeDamage(5);
    clapTrap.beRepaired(5);

    std::cout << clapTrap.getHitPoints() << std::endl;
    std::cout << clapTrap.getEnergyPoints() << std::endl;
    std::cout << clapTrap.getAttackDamage() << std::endl;

    return 0;
}
