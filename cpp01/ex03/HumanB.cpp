/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkibous <mkibous@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 14:33:22 by mkibous           #+#    #+#             */
/*   Updated: 2024/10/22 11:35:49 by mkibous          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

   HumanB::HumanB(std::string name){
        this->name = name;
        weapon = nullptr;
    }

    HumanB::~HumanB(){}
    
    void HumanB::setWeapon(Weapon &wep){
        weapon = &wep;
    }
    void HumanB::attack(){
        std::cout << name << (weapon ? " attacks with their " + weapon->getType() : " don't have a weapon") << std::endl;
    }