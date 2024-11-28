/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkibous <mkibous@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 12:33:36 by mkibous           #+#    #+#             */
/*   Updated: 2024/11/26 14:29:27 by mkibous          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("DiamondTrap_clap_name")
{
    name = "DiamondTrap";
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 30;
    std::cout << "DiamondTrap " << name << " is created using the default constructor" << std::endl;
}
DiamondTrap::DiamondTrap(const std::string &name) :ClapTrap(name + "_clap_name")
{
    this->name = name;
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 30;
    std::cout << "DiamondTrap " << this->name << " is created using the default constructor" << std::endl;
}
DiamondTrap::DiamondTrap(const DiamondTrap &src) : ClapTrap(src.ClapTrap::name)
{
    name = src.name;
    hitPoints = src.hitPoints;
    energyPoints = src.energyPoints;
    attackDamage = src.attackDamage;
    std::cout << "DiamondTrap " << name << " is created using the copy constructor" << std::endl;
}
DiamondTrap &DiamondTrap::operator=(const DiamondTrap &rhs)
{
    if (this != &rhs)
    {
        ClapTrap::name = rhs.ClapTrap::name;
        name = rhs.name;
        hitPoints = rhs.hitPoints;
        energyPoints = rhs.energyPoints;
        attackDamage = rhs.attackDamage;
    }
    std::cout << "DiamondTrap " << name << " is assigned using the copy assignment operator." << std::endl;
    return *this;
}
void DiamondTrap::whoAmI()
{
    std::cout << "I am " << name << " and my ClapTrap name is " << ClapTrap::name << std::endl;
}
DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap " << name << " is destroyed" << std::endl;
}