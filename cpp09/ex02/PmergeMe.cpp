/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkibous <mkibous@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 18:05:34 by mkibous           #+#    #+#             */
/*   Updated: 2025/01/23 17:21:57 by mkibous          ###   ########.fr       */
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
// // void PmergeMe::sort(){
//     // struct timespec start, end;
//     // std::cout << "Before:";
//     // for (size_t i = 0; i < vec.size(); i++)
//     // {
//     //     std::cout << " " << vec[i];
//     // }
//     // std::cout << std::endl;
    
//     // clock_gettime(CLOCK_MONOTONIC, &start);
// //     sortcontainer(this->vec);
//     // clock_gettime(CLOCK_MONOTONIC, &end);

//     // long seconds = end.tv_sec - start.tv_sec;
//     // long nanoseconds = end.tv_nsec - start.tv_nsec;
//     // double time_vec = (seconds * 1e9 + nanoseconds) / 1e3; // Convert to microseconds
//     // clock_gettime(CLOCK_MONOTONIC, &start);
// //     sortcontainer(this->dq);
//     clock_gettime(CLOCK_MONOTONIC, &end);
//     seconds = end.tv_sec - start
// //     int num;
// //     if(arc < 2)
// //         throw std::runtime_error("Error: Insufficient arguments provided.");
// //     for (int i = 1; i < arc; i++)
// //     {
// //         std::istringstream iss(argv[i]);
// //         while (iss >> num)
// //         {
// //             if (num < 0)
// //                 throw std::runtime_error("ERROR: Invalid number");
// //             vec.push_back(num);
// //             dq.push_back(num);
// //         }
// //         if(!iss.eof())
// //             throw std::runtime_error("ERROR: Invalid number");
// //     }.tv_sec;
//     nanoseconds = end.tv_nsec - start.tv_nsec;
//     double time_dq = (seconds * 1e9 + nanoseconds) / 1e3;
//     if(!issorted(vec) || !issorted(dq))
//         throw std::runtime_error("ERROR: not sorted!!!");
//     std::cout << "After:";
//     for (size_t i = 0; i < vec.size(); i++)
//     {
//         std::cout << " " << vec[i];
//     }
//     std::cout << std::endl;
//     std::cout << "Time to process a range of "<< vec.size() <<" elements with std::vector : " << time_vec << " us" << std::endl;
//     std::cout << "Time to process a range of "<<  dq.size() <<" elements with std::deque  : " << time_dq << " us" << std::endl;
// // }