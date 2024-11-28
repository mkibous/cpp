/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkibous <mkibous@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 11:33:24 by mkibous           #+#    #+#             */
/*   Updated: 2024/11/27 12:35:42 by mkibous          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    type = "Dog";
    std::cout << "Dog default constructor called" << std::endl;
}
Dog::Dog(const Dog &src)
{
    type = src.type;
    std::cout << "Dog Copy constructor called" << std::endl;
}
Dog &Dog::operator=(const Dog &rhs)
{
    if (this != &rhs)
        type = rhs.type;
    std::cout << "Dog Copy assignment operator called" << std::endl;
    return *this;
}
Dog::~Dog()
{
    std::cout << "Dog Destructor called" << std::endl;
}
void Dog::makeSound() const
{
    std::cout << "Woof Woof" << std::endl;
}