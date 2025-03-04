/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkibous <mkibous@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 18:05:34 by mkibous           #+#    #+#             */
/*   Updated: 2025/03/04 21:33:18 by mkibous          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}
PmergeMe::PmergeMe(const PmergeMe &src)
{
    *this = src;
}
PmergeMe &PmergeMe::operator=(const PmergeMe &src)
{
    if (this != &src)
    {
        this->vec = src.vec;
        this->dq = src.dq;
    }
    return *this;
}
PmergeMe::~PmergeMe() {}

std::vector<unsigned int> &PmergeMe::getvector(){
    return(vec);
}
std::deque<unsigned int> &PmergeMe::getdeque(){
    return(dq);
}

void PmergeMe::printContent(bool isbefore){
    if(isbefore)
    {
        std::cout << "Before:";
        for (size_t i = 0; i < vec.size(); i++)
        {
            std::cout << " " << vec[i];
        }
        std::cout << std::endl;
    }
    else
    {
        std::cout << "After:";
        for (size_t i = 0; i < dq.size(); i++)
        {
            std::cout << " " << dq[i];
        }
        std::cout << std::endl;
    }
}