/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkibous <mkibous@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:59:13 by mkibous           #+#    #+#             */
/*   Updated: 2024/10/23 15:33:58 by mkibous          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
int main(int arc, char **arv)
{
   if (arc != 2)
      return(1);
   Harl harl;
   harl.complain(arv[1]);
}