#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "Constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other) 
{
    std::cout << "ClapTrap copy constructor called" << std::endl;
    *this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
    std::cout << "ClapTrap assignation operator called" << std::endl;
    _name = other._name;
    _hitPoints = other._hitPoints;
    _energyPoints = other._energyPoints;
    _attackDamage = other._attackDamage;
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor called" << std::endl;
}

void ClapTrap::attack(std::string const &target)
{
    if (_energyPoints < 1 || _hitPoints < 1)
    {
        std::cout << _name << " is out of energy/hit points!" << std::endl;
        return ;
    }
    else {
        std::cout << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
        _energyPoints -= 1;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if ((unsigned int)_hitPoints > amount)
    {
        std::cout << _name << " takes " << amount << " points of damage!" << std::endl;
        _hitPoints -= amount;
    }
    else
    {
        std::cout << _name << " is out of hit points!" << std::endl;
        _hitPoints = 0;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_energyPoints < 1 || _hitPoints < 1)
    {
        std::cout << _name << " is out of energy/hit points!" << std::endl;
        return ;
    }
    else if (_hitPoints > 0 && _energyPoints > 0)
    {
        _hitPoints += amount;
        _energyPoints -= amount;
        std::cout << _name << " is repaired for " << amount << " points!" << std::endl;
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
