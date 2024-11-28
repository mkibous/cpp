/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkibous <mkibous@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 09:52:47 by mkibous           #+#    #+#             */
/*   Updated: 2024/11/26 09:14:24 by mkibous          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
ScavTrap::ScavTrap()
{
    name = "ScavTrap";
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
    std::cout << "ScavTrap " << name << " is created using the default constructor" << std::endl;
}
ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
    std::cout << "ScavTrap " << name << " is created using the constructor with name." << std::endl;
}
ScavTrap::ScavTrap(const ScavTrap &src) : ClapTrap(src.name)
{
    hitPoints = src.hitPoints;
    energyPoints = src.energyPoints;
    attackDamage = src.attackDamage;
    std::cout << "ScavTrap " << name << " is created using the copy constructor" << std::endl;
}
ScavTrap &ScavTrap::operator=(const ScavTrap &rhs)
{
    if (this != &rhs)
    {
        name = rhs.name;
        hitPoints = rhs.hitPoints;
        energyPoints = rhs.energyPoints;
        attackDamage = rhs.attackDamage;
    }
    std::cout << "ScavTrap " << name << " is assigned using the copy assignment operator." << std::endl;
    return *this;
}
ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << name << " is destroyed" << std::endl;
}
void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << name << " has now entered Gatekeeper Mode" << std::endl;
}
void ScavTrap::attack(const std::string &target)
{
    if (energyPoints == 0)
    {
        std::cout << "ScavTrap " << name << " has no energy points to attack" << std::endl;
        return;
    }
    if (hitPoints == 0)
    {
        std::cout << "ScavTrap " << name << " is already dead" << std::endl;
        return;
    }
    std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
    energyPoints--;
}
