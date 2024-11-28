/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkibous <mkibous@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 18:12:53 by mkibous           #+#    #+#             */
/*   Updated: 2024/11/28 17:23:33 by mkibous          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
    type = "cure"
    std::cout << "Cure default constructor called" << std::endl;
}
Cure::Cure(const Cure &src)
{
    type = src.type;
    std::cout << "Cure Copy constructor called" << std::endl;
}
Cure &Cure::operator=(const Cure &rhs)
{
    std::cout << "Cure Copy assignment operator called" << std::endl;
    if (this == &rhs)
        return *this;
    type = rhs.type;
    return *this;
}
Cure::~Cure()
{
    std::cout << "Cure Destructor called" << std::endl;
}

AMateria *Cure::clone(){
    return new Cure(*this)
}
void Cure::use(ICharacter &target){
    std::cout << "* heals " << target.name << "’s wounds *" << std::endl;
}