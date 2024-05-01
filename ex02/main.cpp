#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    // ClapTrap clapclap("Deadpool");
    ScavTrap scavTrap1("Meow");
    FragTrap fragTrap1("Wakkawakka");

    // clapclap.attack("Abi");
    // clapclap.takeDamage(5);
    // clapclap.beRepaired(5);
    std::cout << "*************************************\n";
    scavTrap1.attack("Blubblub");
    scavTrap1.guardGate();
    scavTrap1.takeDamage(4);
    scavTrap1.beRepaired(1);
    std::cout << "*************************************\n";
    fragTrap1.attack("Ola");
    fragTrap1.highFivesGuys();
    fragTrap1.takeDamage(4);
    fragTrap1.beRepaired(1);
    std::cout << "*************************************\n";

    return 0;
}
