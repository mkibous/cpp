/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkibous <mkibous@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 11:30:54 by mkibous           #+#    #+#             */
/*   Updated: 2024/09/12 14:58:29 by mkibous          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
void leaks()
{
    system("leaks zombie");
}
int main()
{
    atexit(leaks);
    Zombie *zombies = zombieHorde(5, "Zombie");
    for (int i = 0; i < 5; i++)
        zombies[i].announce();
    delete[]  zombies;
}