#pragma once

#include <iostream>
#include <cmath>
class Fixed {
    int value;
    static const int bits = 8;
public:
    Fixed();
    Fixed( int const value );
    Fixed( float const value );
    Fixed( Fixed const & src );
    Fixed & operator=( Fixed const & rhs );
    ~Fixed();
    float toFloat( void ) const;
    int toInt( void ) const;
    int getRawBits( void ) const;
    friend std::ostream &operator<<(std::ostream &o, Fixed const &fixed);
    Fixed operator++(); // Prefix increment
    Fixed operator++(int); // Postfix increment
    Fixed operator--();
    Fixed operator--(int);
    Fixed operator*(Fixed const & rhs) const;
    Fixed operator/(Fixed const & rhs) const;
    Fixed operator+(Fixed const & rhs) const;
    Fixed operator-(Fixed const & rhs) const;
    static Fixed max(Fixed &a, Fixed &b);
    static Fixed max(Fixed const &a, Fixed const &b);
    static Fixed min(Fixed &a, Fixed &b);
    static Fixed min(Fixed const &a, Fixed const &b);
    bool operator>(Fixed const & rhs) const;
    bool operator<(Fixed const & rhs) const;
    bool operator>=(Fixed const & rhs) const;
    bool operator<=(Fixed const & rhs) const;
    bool operator==(Fixed const & rhs) const;
    bool operator!=(Fixed const & rhs) const;
};