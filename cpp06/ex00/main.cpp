/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkibous <mkibous@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 15:13:22 by mkibous           #+#    #+#             */
/*   Updated: 2025/01/13 13:03:55 by mkibous          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <cstdio>

int main(int arc, char **arv)
{
    if (arc != 2)
        std::cout << "Error: bad arguments" << std::endl, exit(1);
    ScalarConverter::convert(arv[1]);
}