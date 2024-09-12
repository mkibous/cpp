/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkibous <mkibous@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 11:31:05 by mkibous           #+#    #+#             */
/*   Updated: 2024/09/12 14:27:25 by mkibous          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){
    std::cout << this->name << "Zombie created" << std::endl;
}
Zombie::~Zombie(){
    std::cout << this->name << " destroyed" << std::endl;
}