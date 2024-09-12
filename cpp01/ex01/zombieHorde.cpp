/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkibous <mkibous@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 13:13:49 by mkibous           #+#    #+#             */
/*   Updated: 2024/09/12 14:30:23 by mkibous          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ){
    Zombie* Zombies = new Zombie[N];
    for (int i = 0; i < N; i++){
        Zombies[i].setname(name);
    }
    return Zombies;
}