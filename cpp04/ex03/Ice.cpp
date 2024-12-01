/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkibous <mkibous@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 18:15:26 by mkibous           #+#    #+#             */
/*   Updated: 2024/12/01 15:39:48 by mkibous          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
    type = "ice";
}
Ice::Ice(const Ice &src)
{
    type = src.type;
}
Ice &Ice::operator=(const Ice &rhs)
{
    if (this == &rhs)
        return *this;
    type = rhs.type;
    return *this;
}
Ice::~Ice()
{
}
Ice *Ice::clone()
{
    return new Ice(*this);
}
void Ice::use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}