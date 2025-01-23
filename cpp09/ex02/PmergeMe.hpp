/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkibous <mkibous@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 18:04:11 by mkibous           #+#    #+#             */
/*   Updated: 2025/01/23 17:25:05 by mkibous          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <vector>
#include <deque>
#include <sstream>
#include <string>
#include <cctype>
#include <ctime>

class PmergeMe
{
private:
    std::vector<unsigned int> vec;
    std::deque<unsigned int> dq;
public:
    PmergeMe();
    PmergeMe(const PmergeMe &src);
    ~PmergeMe();
    PmergeMe &operator=(const PmergeMe &src);
    std::vector<unsigned int> &getvector();
    std::deque<unsigned int> &getdeque();
    void printContent(bool isbefore);
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
        if(container.size() <= 1 ||  issorted(container))
            return ;
        T larger, smaller;
        size_t n = container.size();
        for (size_t i = 0; i + 1 < n; i +=2)
        {
            if(container[i] > container[i + 1])
            {
                larger.push_back(container[i]);
                smaller.push_back(container[i + 1]);
            }
            else
            {
                larger.push_back(container[i + 1]);
                smaller.push_back(container[i]); 
            }
        }
        if(n % 2 != 0)
            larger.push_back(container[n - 1]);
        sortcontainer(larger);
        for (size_t i = 0; i < smaller.size(); i++) {
            //binary search for insertion
            typename T::iterator it = std::lower_bound(larger.begin(), larger.end(), smaller[i]);
            //put element into the correct position
            larger.insert(it, smaller[i]);
        }
        container = larger;
    }
    template <typename T>
    void store_sorte(char **argv,int arc, T &container, bool isvec = 0){
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
                container.push_back(num);
            }
            if(!iss.eof())
                throw std::runtime_error("ERROR: Invalid number");
        }
        if(isvec)
            printContent(1);
        sortcontainer(container);
        if(!isvec)
            printContent(0);
    }
};
    