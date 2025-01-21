/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkibous <mkibous@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 18:04:01 by mkibous           #+#    #+#             */
/*   Updated: 2025/01/21 13:47:56 by mkibous          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
int main(int arc, char **arv){
    try
    {
        PmergeMe numbers(arv, arc);
        numbers.sort();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}