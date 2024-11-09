/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkibous <mkibous@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 11:30:54 by mkibous           #+#    #+#             */
/*   Updated: 2024/10/27 15:17:17 by mkibous          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
int main()
{
    int N = 5;
    Zombie *zombies = zombieHorde(N, "Zombie");
    for (int i = 0; i <N; i++)
        zombies[i].announce();
    delete[]  zombies;
}