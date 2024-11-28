/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkibous <mkibous@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 11:28:54 by mkibous           #+#    #+#             */
/*   Updated: 2024/11/27 12:35:20 by mkibous          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    type = "Cat";
    std::cout << "Cat default constructor called" << std::endl;
}
Cat::Cat(const Cat &src)
{
    type = src.type;
    std::cout << "Cat Copy constructor called" << std::endl;
}
Cat &Cat::operator=(const Cat &rhs)
{
    std::cout << "Cat Copy assignment operator called" << std::endl;
    if (this != &rhs)
        type = rhs.type;
    return *this;
}
Cat::~Cat()
{
    std::cout << "Cat Destructor called" << std::endl;
}
void Cat::makeSound() const
{
    std::cout << "Meow Meow" << std::endl;
}