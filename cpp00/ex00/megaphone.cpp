/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkibous <mkibous@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 11:31:30 by mkibous           #+#    #+#             */
/*   Updated: 2024/10/04 10:40:55 by mkibous          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int arc, char **arv)
{
    std::string str;
    if(arc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    for(int i = 1; i < arc; i++){
        for (int j = 0; arv[i][j]; j++)
            std::cout << (char)toupper(arv[i][j]);
    }
    std::cout << "\n";

}