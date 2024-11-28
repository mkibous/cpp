#pragma once
#include <iostream>

class ClapTrap
{
protected:
    std::string name;
    unsigned int hitPoints;
    unsigned int energyPoints;
    unsigned int attackDamage;

public:
    ClapTrap();
    ClapTrap(const std::string &name);
    ClapTrap(const ClapTrap &src);
    ClapTrap &operator=(const ClapTrap &rhs);
    ~ClapTrap();
    void attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};
