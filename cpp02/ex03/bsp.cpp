/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkibous <mkibous@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 17:27:05 by mkibous           #+#    #+#             */
/*   Updated: 2024/11/16 12:56:41 by mkibous          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
//A= sqrt(S(s-a)(s-b)(s-c))
//s= (a+b+c)/2
//b= sqrt((x2-x1)^2 + (y2-y1)^2)
float CalculateSide(Point p1,Point p2)
{
    return std::sqrt(std::pow(p1.getx() - p2.getx(), 2) + std::pow(p1.gety() - p2.gety(), 2));
}
float CalculateSemiPerimetre(float a, float b, float c){
    return ((a + b + c)/2);
}
float CalculateArea(float a, float b, float c){
    float S = CalculateSemiPerimetre(a, b, c);
    return(std::sqrt(S * (S - a) * (S - b) * (S - c)));
}
bool bsp(Point const a, Point const b, Point const c, Point const point){
    float ab = CalculateSide(a,b);
    float bc = CalculateSide(b,c);
    float ca = CalculateSide(c,a);
    float pa = CalculateSide(point, a);
    float pb = CalculateSide(point, b);
    float pc = CalculateSide(point, c);
    float Aabc = CalculateArea(ab, bc, ca);
    float Apab = CalculateArea(ab, pa, pb);
    float Apac = CalculateArea(ca, pa, pc);
    float Apbc = CalculateArea(bc, pc, pb);
    if (std::fabs(Aabc - (Apab + Apac + Apbc)) < 1e-5f && Aabc != 0 && Apab != 0 && Apac != 0 && Apbc != 0)
        return true;
    return false;
}