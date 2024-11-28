/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkibous <mkibous@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 08:15:11 by mkibous           #+#    #+#             */
/*   Updated: 2024/11/25 15:42:28 by mkibous          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    name = "ClapTrap";
    hitPoints = 10;
    energyPoints = 10;
    attackDamage = 0;
    std::cout << "ClapTrap " << name << " is created using the default constructor" << std::endl;
}
ClapTrap::ClapTrap(const std::string &name)
{
    this->name = name;
    hitPoints = 10;
    energyPoints = 10;
    attackDamage = 0;
    std::cout << "ClapTrap " << name << " is created using the constructor with name." << std::endl;
}
ClapTrap::ClapTrap(const ClapTrap &src)
{
    name = src.name;
    hitPoints = src.hitPoints;
    energyPoints = src.energyPoints;
    attackDamage = src.attackDamage;
    std::cout << "ClapTrap " << name << " is created using the copy constructor" << std::endl;
}
ClapTrap &ClapTrap::operator=(const ClapTrap &rhs)
{
    if (this != &rhs)
    {
        name = rhs.name;
        hitPoints = rhs.hitPoints;
        energyPoints = rhs.energyPoints;
        attackDamage = rhs.attackDamage;
    }
    std::cout << "ClapTrap " << name << " is assigned using the copy assignment operator." << std::endl;
    return *this;
}
ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << name << " is destroyed" << std::endl;
}
void ClapTrap::attack(const std::string &target)
{
    if (energyPoints == 0)
    {
        std::cout << "ClapTrap " << name << " has no energy points to attack" << std::endl;
        return;
    }
    if (hitPoints == 0)
    {
        std::cout << "ClapTrap " << name << " is already dead" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
    energyPoints--;
}
void ClapTrap::takeDamage(unsigned int amount)
{
    if (hitPoints == 0)
    {
        std::cout << "ClapTrap " << name << " is already dead" << std::endl;
        return;
    }
    amount > hitPoints ? hitPoints = 0 : hitPoints -= amount;
    std::cout << "ClapTrap " << name << " takes " << amount << " points of damage!" << " current hit points: " << hitPoints << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount)
{
    if (energyPoints == 0)
    {
        std::cout << "ClapTrap " << name << " has no energy points to attack" << std::endl;
        return;
    }
    if (hitPoints == 0)
    {
        std::cout << "ClapTrap " << name << " is already dead" << std::endl;
        return;
    }
    hitPoints += amount;
    energyPoints--;
    std::cout << "ClapTrap " << name << " is repaired by " << amount << " points!" << " current hit points: " << hitPoints << std::endl;
}
