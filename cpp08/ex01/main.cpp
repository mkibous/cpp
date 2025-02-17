/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkibous <mkibous@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 09:57:21 by mkibous           #+#    #+#             */
/*   Updated: 2025/02/17 16:20:21 by mkibous          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
int main()
{
    try{
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    const Span sp2(sp);
    std::cout << sp2.shortestSpan() << std::endl;
    std::cout << sp2.longestSpan() << std::endl;
    }
    catch(std::exception &e){
        std::cout << "ERROR: " << e.what() << std::endl;
    }
    try{
    Span sp = Span(9);
    sp.addNumber(6);
    sp.addNumber(4);
    sp.addNumber(0);
    sp.addNumber(-9);
    sp.addNumber(-11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;}
    catch(std::exception &e){
        std::cout << "ERROR: " << e.what() << std::endl;
    }
    return 0;
}