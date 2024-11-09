/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkibous <mkibous@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 16:05:05 by mkibous           #+#    #+#             */
/*   Updated: 2024/11/09 22:07:14 by mkibous          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>

Point::Point(): x(0), y(0)
{}
Point::Point(float const x, float const y): x(x), y(y)
{}
Point::Point(Point const &src): x(src.x), y(src.y)
{}
Point &Point::operator=(Point const &rhs){
    x = rhs.x;
    y = rhs.y;
    return *this;
}
Point::~Point(){}

float Point::getx() const{
    return x.toFloat();
}
float Point::gety() const{
    return y.toFloat();
}