/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkibous <mkibous@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 11:33:24 by mkibous           #+#    #+#             */
/*   Updated: 2024/11/27 13:12:33 by mkibous          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    brain = new Brain();
    type = "Dog";
    std::cout << "Dog default constructor called" << std::endl;
}
Dog::Dog(const Dog &src)
{
    brain = new Brain(*src.brain);
    type = src.type;
    std::cout << "Dog Copy constructor called" << std::endl;
}
Dog &Dog::operator=(const Dog &rhs)
{
    std::cout << "Dog Copy assignment operator called" << std::endl;
    if (this != &rhs)
        return *this;
    delete brain;
    brain = new Brain(*rhs.brain);
    type = rhs.type;
    return *this;
}
Dog::~Dog()
{
    delete brain;
    std::cout << "Dog Destructor called" << std::endl;
}
void Dog::makeSound() const
{
    std::cout << "Woof Woof" << std::endl;
}