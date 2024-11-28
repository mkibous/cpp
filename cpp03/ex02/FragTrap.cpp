/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkibous <mkibous@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 11:50:54 by mkibous           #+#    #+#             */
/*   Updated: 2024/11/26 09:14:08 by mkibous          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    name = "FragTrap";
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
    std::cout << "FragTrap " << name << " is created using the default constructor" << std::endl;
}
FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
    std::cout << "FragTrap " << name << " is created using the constructor with name." << std::endl;
}
FragTrap::FragTrap(const FragTrap &src) : ClapTrap(src.name)
{
    hitPoints = src.hitPoints;
    energyPoints = src.energyPoints;
    attackDamage = src.attackDamage;
    std::cout << "FragTrap " << name << " is created using the copy constructor" << std::endl;
}
FragTrap &FragTrap::operator=(const FragTrap &rhs)
{
    if (this != &rhs)
    {
        name = rhs.name;
        hitPoints = rhs.hitPoints;
        energyPoints = rhs.energyPoints;
        attackDamage = rhs.attackDamage;
    }
    std::cout << "FragTrap " << name << " is assigned using the copy assignment operator." << std::endl;
    return *this;
}
FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << name << " is destroyed" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << name << " says: High five! You all did a great job! 🙌" << std::endl;
}
