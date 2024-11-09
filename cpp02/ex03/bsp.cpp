/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkibous <mkibous@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 17:27:05 by mkibous           #+#    #+#             */
/*   Updated: 2024/11/09 22:20:33 by mkibous          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
//A= sqrt(S(s-a)(s-b)(s-c))
//s= (a+b+c)/2
//b= sqrt((x2-x1)^2 + (y2-y1)^2)
//c= sqrt((x3-x2)^2 + (y3-y2)^2)
//a= sqrt((x3-x1)^2 + (y3-y1)^2)
float CalculateSide(Point p1,Point p2)
{
    return sqrt(pow(p1.getx() - p2.getx(), 2) + pow(p1.gety() - p2.gety(), 2));
}
float CalculateSemiPerimetre(float a, float b, float c){
    return ((a + b + c)/2);
}
float CalculateArea(float a, float b, float c){
    float S = CalculateSemiPerimetre(a, b, c);
    return(sqrt(S * (S - a) * (S - b) * (S - c)));
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
    std::cout << "Aabc: " << Aabc << std::endl;
    std::cout << "Apab + Apac + Apbc: " << Apab + Apac + Apbc << std::endl;
    if (std::fabs(Aabc - (Apab + Apac + Apbc)) < 1e-5f)
        return true;
    return false;
}