/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkibous <mkibous@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 11:31:08 by mkibous           #+#    #+#             */
/*   Updated: 2024/09/12 12:20:43 by mkibous          ###   ########.fr       */
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
        Zombie(std::string name);
        ~Zombie();
    void announce(){
        std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
    }
};
    Zombie* newZombie(std::string name);
    void randomChump(std::string name);
#endif 