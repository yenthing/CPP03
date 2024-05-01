#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
    this->_name = name;
    this->_hitPoints = 10;
    this->_energyPoints = 10;
    this->_attackDamage = 0;
    std::cout << "ClapTrap name constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
    std::cout << "ClapTrap copy constructor called" << std::endl;
    *this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
    if (this != &other)
    {
        std::cout << "ClapTrap assignation operator called" << std::endl;
        this->_name = other._name;
        this->_hitPoints = other._hitPoints;
        this->_energyPoints = other._energyPoints;
        this->_attackDamage = other._attackDamage;    
    }
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor called" << std::endl;
}

void ClapTrap::attack(std::string const &target)
{
    if (this->_energyPoints < 1 || this->_hitPoints < 1)
    {
        std::cout << "Claptrap " << this->_name << " is out of energy/hit points!" << std::endl;
        return ;
    }
    else {
        std::cout << "Claptrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
        this->_energyPoints -= 1;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if ((unsigned int)this->_hitPoints > amount)
    {
        std::cout << this->_name << " takes " << amount << " points of damage!" << std::endl;
        this->_hitPoints -= amount;
    }
    else
    {
        std::cout << _name << " is out of hit points!" << std::endl;
        this->_hitPoints = 0;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_energyPoints < 1 || this->_hitPoints < 1)
    {
        std::cout << this->_name << " is out of energy/hit points!" << std::endl;
        return ;
    }
    else if (this->_hitPoints > 0 && this->_energyPoints > 0)
    {
        this->_hitPoints += amount;
        this->_energyPoints -= amount;
        std::cout << this->_name << " is repaired for " << amount << " points!" << std::endl;
    } 
}

int ClapTrap::getHitPoints()
{
    return _hitPoints;
}

int ClapTrap::getEnergyPoints()
{
    return _energyPoints;
}

int ClapTrap::getAttackDamage()
{
    return _attackDamage;
}
