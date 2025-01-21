/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkibous <mkibous@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 18:04:11 by mkibous           #+#    #+#             */
/*   Updated: 2025/01/21 15:38:34 by mkibous          ###   ########.fr       */
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
    PmergeMe(char **argv, int arc);
    ~PmergeMe();
    PmergeMe &operator=(const PmergeMe &src);
    void sort();
    std::vector<unsigned int> &getvector();
    std::deque<unsigned int> &getdeque();
};
