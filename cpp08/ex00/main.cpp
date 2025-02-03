/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkibous <mkibous@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 12:06:01 by mkibous           #+#    #+#             */
/*   Updated: 2025/02/01 15:57:18 by mkibous          ###   ########.fr       */
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
    {
        std::vector<int> numbers;
        numbers.push_back(1);
        numbers.push_back(2);
        numbers.push_back(3);
        numbers.push_back(4);
        numbers.push_back(5);
        std::vector<int>::iterator it = easyfind(numbers, target); 
        if (it != numbers.end())
            std::cout << "Found: " << *it << std::endl;
        else
            std::cout << "Key not found\n";
    }

    {
        std::deque<int> numbers;
        numbers.push_back(1);
        numbers.push_back(2);
        numbers.push_back(3);
        numbers.push_back(4);
        numbers.push_back(5);
        std::deque<int>::iterator it = easyfind(numbers, target); 
        if (it != numbers.end())
            std::cout << "Found: " << *it << std::endl;
        else
            std::cout << "Key not found\n";
    }

    {
        std::list<int> numbers;
        numbers.push_back(1);
        numbers.push_back(2);
        numbers.push_back(3);
        numbers.push_back(4);
        numbers.push_back(5);
        std::list<int>::iterator it = easyfind(numbers, target); 
        if (it != numbers.end())
            std::cout << "Found: " << *it << std::endl;
        else
            std::cout << "Key not found\n";
        it = easyfind(numbers, 0); 
        if (it != numbers.end())
            std::cout << "Found: " << *it << std::endl;
        else
            std::cout << "Key not found" << std::endl;
    }
    return 0;
}
