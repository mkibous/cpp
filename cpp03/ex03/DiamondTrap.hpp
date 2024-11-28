#pragma once
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
class DiamondTrap :   public ScavTrap, public FragTrap
{
private:
    std::string name;

public:
    DiamondTrap();
    DiamondTrap(const std::string &name);
    DiamondTrap(const DiamondTrap &src);
    DiamondTrap &operator=(const DiamondTrap &rhs);
    ~DiamondTrap();
    void whoAmI();
    using ScavTrap::attack;
};

