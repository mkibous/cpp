/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkibous <mkibous@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 12:14:11 by mkibous           #+#    #+#             */
/*   Updated: 2024/11/27 12:36:15 by mkibous          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"


WrongCat::WrongCat()
{
    type = "WrongCat";
    std::cout << "WrongCat default constructor called" << std::endl;
}
WrongCat::WrongCat(const WrongCat &src)
{
    type = src.type;
    std::cout << "WrongCat Copy constructor called" << std::endl;
}
WrongCat &WrongCat::operator=(const WrongCat &rhs)
{
    if (this != &rhs)
        type = rhs.type;
    std::cout << "WrongCat Copy assignment operator called" << std::endl;
    return *this;
}
WrongCat::~WrongCat()
{
    std::cout << "WrongCat Destructor called" << std::endl;
}
void WrongCat::makeSound() const
{
    std::cout << "Meow Meow" << std::endl;
}