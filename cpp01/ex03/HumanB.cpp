/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkibous <mkibous@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 14:33:22 by mkibous           #+#    #+#             */
/*   Updated: 2024/10/19 16:45:12 by mkibous          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

   HumanB::HumanB(std::string name){
        this->name = name;
    }

    HumanB::~HumanB(){}
    
    void HumanB::setWeapon(Weapon &wep){
        this->weapon = &wep;
    }
    void HumanB::attack(){
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
    }