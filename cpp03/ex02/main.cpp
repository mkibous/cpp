/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkibous <mkibous@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 08:15:17 by mkibous           #+#    #+#             */
/*   Updated: 2024/11/28 14:26:10 by mkibous          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
int main(){
    FragTrap frag1("frag1");
    ScavTrap bot2("bot2");
    bot2.guardGate();
    bot2.attack("frag1");
    bot2.attack("frag1");
    frag1.takeDamage(40);
    frag1.beRepaired(10);
    frag1.attack("bot2");
    frag1.attack("bot2");
    frag1.attack("bot2");
    frag1.attack("bot2");
    bot2.takeDamage(120);
    bot2.beRepaired(5);
    frag1.highFivesGuys();
}