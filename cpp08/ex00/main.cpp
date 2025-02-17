/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkibous <mkibous@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 12:06:01 by mkibous           #+#    #+#             */
/*   Updated: 2025/02/17 16:43:46 by mkibous          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <deque>
#include <list>
#include <iostream>

int main()
{
    int target = 5;
    try
    {
        std::vector<int> numbers;
        numbers.push_back(1);
        numbers.push_back(2);
        numbers.push_back(3);
        numbers.push_back(4);
        numbers.push_back(5);
        std::vector<int>::iterator it = easyfind(numbers, target);
        std::cout << "Found: " << *it << std::endl;
    }catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }

    try
    {
        std::deque<int> numbers;
        numbers.push_back(1);
        numbers.push_back(2);
        numbers.push_back(3);
        numbers.push_back(4);
        numbers.push_back(5);
        std::deque<int>::iterator it = easyfind(numbers, target); 
        std::cout << "Found: " << *it << std::endl;
    }catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }

    try
    {
        std::list<int> numbers;
        numbers.push_back(1);
        numbers.push_back(2);
        numbers.push_back(3);
        numbers.push_back(4);
        numbers.push_back(5);
        std::list<int>::iterator it = easyfind(numbers, target);
        std::cout << "Found: " << *it << std::endl;
        it = easyfind(numbers, 0);
        std::cout << "Found: " << *it << std::endl;
    }catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
    return 0;
}
