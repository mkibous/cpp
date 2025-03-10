#pragma once
#include "ClapTrap.hpp"
class ScavTrap : virtual public ClapTrap
{
private:
public:
    ScavTrap();
    ScavTrap(const std::string &name);
    ScavTrap(const ScavTrap &src);
    ScavTrap &operator=(const ScavTrap &rhs);
    ~ScavTrap();
    void attack(const std::string &target);
    void guardGate();
};