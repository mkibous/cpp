/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkibous <mkibous@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 08:15:17 by mkibous           #+#    #+#             */
/*   Updated: 2024/11/26 09:28:16 by mkibous          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
int main(){
    DiamondTrap diamondTrap("Dia");
    diamondTrap.whoAmI();
    diamondTrap.attack("target");
    diamondTrap.guardGate();
    diamondTrap.highFivesGuys();
    return 0;
}