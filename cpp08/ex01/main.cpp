/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkibous <mkibous@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 09:57:21 by mkibous           #+#    #+#             */
/*   Updated: 2025/02/24 11:16:26 by mkibous          ###   ########.fr       */
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
    Span sp = Span(100001);
    sp.addNumber(-100);
    std::vector<int> vec;
    for (int i = 1; i <= 100000; i++)
    {
        vec.push_back(i);
    }
    sp.addNumber(vec.begin(), vec.end());
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    sp.addNumber(-100);
    }
    catch(std::exception &e){
        std::cout << "ERROR: " << e.what() << std::endl;
    }
    return 0;
}