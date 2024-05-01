#include "ScavTrap.hpp"

int main()
{
    ClapTrap clapclap("Bum");
    ScavTrap scavTrap1("Anna");

    std::cout << "*************************************\n";
    clapclap.attack("Abi");
    clapclap.takeDamage(5);
    clapclap.beRepaired(5);
    std::cout << "*************************************\n";
    scavTrap1.attack("Vali");
    scavTrap1.guardGate();
    scavTrap1.takeDamage(4);
    scavTrap1.beRepaired(1);

    return 0;
}
