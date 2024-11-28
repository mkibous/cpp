/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkibous <mkibous@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 10:23:26 by mkibous           #+#    #+#             */
/*   Updated: 2024/11/27 12:36:29 by mkibous          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    type = "empty";
    std::cout << "Animal default constructor called" << std::endl;
}
Animal::Animal(const Animal &src)
{
    type = src.type;
    std::cout << "Animal Copy constructor called" << std::endl;
}
Animal &Animal::operator=(const Animal &rhs)
{
    std::cout << "Animal Copy assignment operator called" << std::endl;
    if (this == &rhs)
        return *this;
    type = rhs.type;
    return *this;
}
Animal::~Animal()
{
    std::cout << "Animal Destructor called" << std::endl;
}
void Animal::makeSound() const
{
    std::cout << "Animal sound" << std::endl;
}
std::string Animal::getType() const
{
    return type;
}