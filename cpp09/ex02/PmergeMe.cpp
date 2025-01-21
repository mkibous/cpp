/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkibous <mkibous@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 18:05:34 by mkibous           #+#    #+#             */
/*   Updated: 2025/01/21 16:05:23 by mkibous          ###   ########.fr       */
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

PmergeMe::PmergeMe(char **argv,int arc){
    int num;
    if(arc < 2)
        throw std::runtime_error("Error: Insufficient arguments provided.");
    for (int i = 1; i < arc; i++)
    {
        std::istringstream iss(argv[i]);
        while (iss >> num)
        {
            if (num < 0)
                throw std::runtime_error("ERROR: Invalid number");
            vec.push_back(num);
            dq.push_back(num);
        }
        if(!iss.eof())
            throw std::runtime_error("ERROR: Invalid number");
    }
}
std::vector<unsigned int> &PmergeMe::getvector(){
    return(vec);
}
std::deque<unsigned int> &PmergeMe::getdeque(){
    return(dq);
}
template <typename T>
bool issorted(T &container){
    for (size_t i = 1; i < container.size(); i++)
    {
        if(container[i - 1] > container[i])
            return(false);
    }
    return(true);
}

template <typename T>
void sortcontainer(T &container){
    if(issorted(container))
        return ;
    int j = 0;
    int y = 0;
    int splitPoint = container.size() / 2;
    T part1(container.begin(), container.begin() + splitPoint);
    T part2(container.begin() + splitPoint, container.end());
    if(container.size() > 2)
    {
        sortcontainer(part1);
        sortcontainer(part2);
    }
    //merge an sort
    for (size_t i = 0; i < container.size(); i++)
    {
        if(j < (int)part1.size() &&  (part1[j] <= part2[y] || y >= (int)part2.size()))
            container[i] = part1[j], j++;
        else if(y < (int)part2.size() && (part1[j] > part2[y] || j >= (int)part1.size()))
            container[i] = part2[y], y++;
    }
}
void PmergeMe::sort(){
    struct timespec start, end;
    std::cout << "Before:";
    for (size_t i = 0; i < vec.size(); i++)
    {
        std::cout << " " << vec[i];
    }
    std::cout << std::endl;
    
    clock_gettime(CLOCK_MONOTONIC, &start);
    sortcontainer(this->vec);
    clock_gettime(CLOCK_MONOTONIC, &end);

    long seconds = end.tv_sec - start.tv_sec;
    long nanoseconds = end.tv_nsec - start.tv_nsec;
    double time_vec = (seconds * 1e9 + nanoseconds) / 1e3; // Convert to microseconds
    clock_gettime(CLOCK_MONOTONIC, &start);
    sortcontainer(this->dq);
    clock_gettime(CLOCK_MONOTONIC, &end);
    seconds = end.tv_sec - start.tv_sec;
    nanoseconds = end.tv_nsec - start.tv_nsec;
    double time_dq = (seconds * 1e9 + nanoseconds) / 1e3;
    if(!issorted(vec) || !issorted(dq))
        throw std::runtime_error("ERROR: not sorted!!!");
    std::cout << "After:";
    for (size_t i = 0; i < vec.size(); i++)
    {
        std::cout << " " << vec[i];
    }
    std::cout << std::endl;
    std::cout << "Time to process a range of "<< vec.size() <<" elements with std::vector : " << time_vec << "us" << std::endl;
    std::cout << "Time to process a range of "<< dq.size() <<" elements with std::deque : " << time_dq << "us" << std::endl;
}