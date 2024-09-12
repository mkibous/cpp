/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkibous <mkibous@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 11:31:08 by mkibous           #+#    #+#             */
/*   Updated: 2024/09/12 14:19:43 by mkibous          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>
#include <string>
class Zombie
{
    private:
        std::string name;
    public:
        Zombie();
        ~Zombie();
        void setname(std::string name){
            this->name = name;
        }
    void announce(){
        std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
    }
};
Zombie* zombieHorde( int N, std::string name );
#endif 