/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkibous <mkibous@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 08:15:17 by mkibous           #+#    #+#             */
/*   Updated: 2024/11/25 14:38:06 by mkibous          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
int main(){
    ScavTrap bot1;
    ScavTrap bot2("bot2");
    bot1.guardGate();
    bot1.attack("bot2");
    bot2.takeDamage(20);
    bot2.beRepaired(5);
    ScavTrap bot3 (bot2);
    bot3.beRepaired(5);
}