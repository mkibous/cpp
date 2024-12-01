/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkibous <mkibous@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 18:12:53 by mkibous           #+#    #+#             */
/*   Updated: 2024/12/01 15:41:02 by mkibous          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
    type = "cure";
}
Cure::Cure(const Cure &src)
{
    type = src.type;
}
Cure &Cure::operator=(const Cure &rhs)
{
    if (this == &rhs)
        return *this;
    type = rhs.type;
    return *this;
}
Cure::~Cure()
{
}

Cure *Cure::clone()
{
    return new Cure(*this);
}
void Cure::use(ICharacter &target)
{
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}