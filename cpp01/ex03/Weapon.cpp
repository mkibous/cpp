/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkibous <mkibous@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 14:55:50 by mkibous           #+#    #+#             */
/*   Updated: 2024/10/22 11:31:24 by mkibous          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string& Weapon::getType()
{
    return type;
}
void Weapon::setType(std::string newtype)
{
    type = newtype;
}

Weapon::Weapon(std::string settype){
    type = settype;
}