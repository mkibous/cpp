/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkibous <mkibous@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 17:16:01 by mkibous           #+#    #+#             */
/*   Updated: 2024/11/09 13:01:39 by mkibous          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
    Fixed a;
    Fixed j(42.42f);
    Fixed const b(Fixed(5.1f) * Fixed(2));
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << a-- << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::min(j, a) << std::endl;
    std::cout << Fixed::max(j, a) << std::endl;
    Fixed const c(42.42f);
    std::cout << Fixed::min(c , b) << std::endl;
    std::cout << Fixed::max(c, b) << std::endl;
    std::cout << (a < b )<< std::endl;
    std::cout << (a > b )<< std::endl;
    std::cout << (a <= b )<< std::endl;
    std::cout << (a >= b )<< std::endl;
    std::cout << (a == b )<< std::endl;
    std::cout << (a != b )<< std::endl;
    std::cout << (a + b) << std::endl;
    std::cout << (a - a) << std::endl;
    std::cout << (a * b) << std::endl;
    std::cout << (a / b) << std::endl;
    return 0;
}