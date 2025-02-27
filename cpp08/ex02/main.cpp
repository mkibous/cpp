/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkibous <mkibous@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 12:30:40 by mkibous           #+#    #+#             */
/*   Updated: 2025/02/24 14:16:13 by mkibous          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <vector>
int main()
{
    MutantStack<int> mstack;
    mstack.push(10);
    mstack.push(20);
    mstack.push(30);

    std::cout << "iterator" << std::endl;
    for (MutantStack<int>::iterator it = mstack.begin(); it != mstack.end(); ++it)
    {
        std::cout << *it << std::endl;
    }
    std::cout << "const_iterator" << std::endl;
    const MutantStack<int>& constMstack = mstack;
    for (MutantStack<int>::const_iterator it = constMstack.begin(); it != constMstack.end(); ++it)
    {
        std::cout << *it << std::endl;
    }

    std::cout << "reverse_iterator" << std::endl;
    for (MutantStack<int>::reverse_iterator it = mstack.rbegin(); it != mstack.rend(); ++it)
    {
        std::cout << *it << std::endl;
    }
    std::cout << "const_reverse_iterator" << std::endl;
    for (MutantStack<int>::const_reverse_iterator it = constMstack.rbegin(); it != constMstack.rend(); ++it)
    {
        std::cout << *it << std::endl;
    }
    return 0;
}