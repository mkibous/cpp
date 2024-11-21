/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkibous <mkibous@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 17:44:38 by mkibous           #+#    #+#             */
/*   Updated: 2024/11/20 15:13:19 by mkibous          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    value = 0;
    std::cout << "Default constructor called" << std::endl;
}
Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}
Fixed::Fixed(const Fixed &src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}
Fixed &Fixed::operator=(const Fixed &src)
{
    if (this != &src)
        value = src.getRawBits();
    std::cout << "Copy assignment operator called" << std::endl;
    return *this;
}
int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return value;
}
void Fixed::setRawBits(int const raw)
{
    value = raw;
    std::cout << "setRawBits member function called" << std::endl;
}