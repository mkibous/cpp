/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkibous <mkibous@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 11:31:08 by mkibous           #+#    #+#             */
/*   Updated: 2024/10/27 16:09:17 by mkibous          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
class Zombie
{
    private:
        std::string name;
    public:
        Zombie();
        ~Zombie();
        void setname(std::string name);
        void announce();
};
Zombie* zombieHorde( int N, std::string name );

