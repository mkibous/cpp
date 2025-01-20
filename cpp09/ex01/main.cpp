/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkibous <mkibous@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 16:21:49 by mkibous           #+#    #+#             */
/*   Updated: 2025/01/20 12:15:55 by mkibous          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
int main(int arc, char **arv)
{
    if (arc != 2) 
        return (std::cerr << "ERROR: Inalid Arguments" << std::endl, 1);
    std::string numbers = arv[1];
    try
    {
        RPN rpn(numbers);
        std::cout << rpn.getresult() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}