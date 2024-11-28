/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkibous <mkibous@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 18:15:26 by mkibous           #+#    #+#             */
/*   Updated: 2024/11/27 18:15:41 by mkibous          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
    type = "ice" std::cout << "Ice default constructor called" << std::endl;
}
Ice::Ice(const Ice &src)
{
    type = src.type;
    std::cout << "Ice Copy constructor called" << std::endl;
}
Ice &Ice::operator=(const Ice &rhs)
{
    std::cout << "Ice Copy assignment operator called" << std::endl;
    if (this == &rhs)
        return *this;
    type = rhs.type;
    return *this;
}
Ice::~Ice()
{
    std::cout << "Ice Destructor called" << std::endl;
}