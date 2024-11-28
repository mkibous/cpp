/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkibous <mkibous@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 08:15:17 by mkibous           #+#    #+#             */
/*   Updated: 2024/11/25 09:19:35 by mkibous          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
int main()
{
    ClapTrap claptrap;
    ClapTrap claptrap2(claptrap);
    ClapTrap claptrap3("Claptrap3");
    claptrap2 = ClapTrap("Claptrap2");
    claptrap.attack("Claptrap2");
    claptrap2.takeDamage(5);
    claptrap2.beRepaired(2);
    claptrap2.attack("Claptrap3");
    claptrap3.takeDamage(5);
    claptrap3.attack("Claptrap");
    claptrap.takeDamage(10);
    claptrap.beRepaired(5);
    return 0;
}