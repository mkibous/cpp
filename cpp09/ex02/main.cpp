/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkibous <mkibous@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 18:04:01 by mkibous           #+#    #+#             */
/*   Updated: 2025/01/23 17:24:54 by mkibous          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
int main(int arc, char **arv){
    try
    {
        PmergeMe numbers;
        struct timespec start, end;
        clock_gettime(CLOCK_MONOTONIC, &start);
            numbers.store_sorte(arv, arc, numbers.getvector(), 1);
        clock_gettime(CLOCK_MONOTONIC, &end);
        long seconds = end.tv_sec - start.tv_sec;
        long nanoseconds = end.tv_nsec - start.tv_nsec;
        double time_vec = (seconds * 1e9 + nanoseconds) / 1e3; // Convert to microseconds
        clock_gettime(CLOCK_MONOTONIC, &start);
        numbers.store_sorte(arv, arc, numbers.getdeque());
        clock_gettime(CLOCK_MONOTONIC, &end);
        seconds = end.tv_sec - start.tv_sec;
        nanoseconds = end.tv_nsec - start.tv_nsec;
        double time_dq = (seconds * 1e9 + nanoseconds) / 1e3;
        if(!numbers.issorted(numbers.getdeque()) || !numbers.issorted(numbers.getvector()))
            throw std::runtime_error("ERROR: not sorted!!!");
        std::cout << "Time to process a range of "<< numbers.getvector().size() <<" elements with std::vector : " << time_vec << " us" << std::endl;
        std::cout << "Time to process a range of "<<  numbers.getdeque().size() <<" elements with std::deque  : " << time_dq << " us" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}