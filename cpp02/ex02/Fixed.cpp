/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkibous <mkibous@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 17:44:38 by mkibous           #+#    #+#             */
/*   Updated: 2024/11/09 13:02:03 by mkibous          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    value = 0;
}
Fixed::Fixed( int const value )
{
    this->value = value << bits;
}
Fixed::Fixed( float const value )
{
    this->value = roundf(value * (1 << bits));
}

Fixed::Fixed( Fixed const & src )
{
    *this = src;
}
Fixed::~Fixed()
{
}
int Fixed::getRawBits(void) const
{
    return value;
}
Fixed & Fixed::operator=( Fixed const & rhs )
{
    value = rhs.getRawBits();
    return *this;
}
float Fixed::toFloat( void ) const{
    return (float)value / (1 << bits);
}

int Fixed::toInt( void ) const{
return value >> bits;
}
std::ostream &operator<<(std::ostream &o, Fixed const &fixed)
{
    o << fixed.toFloat();
    return o;
}
Fixed Fixed::operator++( void )
{
    value++;
    return *this;
}
Fixed Fixed::operator++( int )
{
    Fixed tmp(*this);
    value++;
    return tmp;
}
Fixed Fixed::operator--( void )
{
    value--;
    return *this;
}
Fixed Fixed::operator--( int )
{
    Fixed tmp(*this);
    value--;
    return tmp;
}

Fixed Fixed ::operator*(Fixed const &rhs) const
{
    return this->toFloat() * rhs.toFloat();
}
Fixed Fixed ::operator/(Fixed const &rhs) const
{
    return this->toFloat() / rhs.toFloat();
}
Fixed Fixed ::operator+(Fixed const &rhs) const
{
    return this->toFloat() + rhs.toFloat();
}
Fixed Fixed ::operator-(Fixed const &rhs) const
{
    return this->toFloat() - rhs.toFloat();
}
Fixed Fixed::max(Fixed const &a, Fixed const &b)
{
    return a.toFloat() > b.toFloat() ? a : b;
}
Fixed Fixed::min(Fixed const &a, Fixed const &b)
{
    return a.toFloat() < b.toFloat() ? a : b;
}
Fixed Fixed::max(Fixed &a, Fixed &b)
{
    return a.toFloat() > b.toFloat() ? a : b;
}
Fixed Fixed::min(Fixed &a, Fixed &b)
{
    return a.toFloat() < b.toFloat() ? a : b;
}

bool Fixed::operator>(Fixed const & rhs) const{
    return this->toFloat() > rhs.toFloat();
}
bool Fixed::operator<(Fixed const & rhs) const{
    return this->toFloat() < rhs.toFloat();
}
bool Fixed::operator>=(Fixed const & rhs) const{
    return this->toFloat() >= rhs.toFloat();
}
bool Fixed::operator<=(Fixed const & rhs) const{
    return this->toFloat() <= rhs.toFloat();
}
bool Fixed::operator==(Fixed const & rhs) const{
    return this->toFloat() == rhs.toFloat();
}
bool Fixed::operator!=(Fixed const & rhs) const{
    return this->toFloat() != rhs.toFloat();
}