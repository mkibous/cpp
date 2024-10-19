/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkibous <mkibous@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 15:08:07 by mkibous           #+#    #+#             */
/*   Updated: 2024/10/19 15:34:25 by mkibous          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& wep): name(name), weapon(wep)
{}

HumanA::~HumanA(){}
void HumanA::attack(){
    std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}