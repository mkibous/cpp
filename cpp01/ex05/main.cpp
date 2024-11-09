/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkibous <mkibous@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:59:13 by mkibous           #+#    #+#             */
/*   Updated: 2024/10/22 17:21:30 by mkibous          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
int main()
{
   Harl harl;
   harl.complain("DEBUG");
   harl.complain("INFO");
   harl.complain("WARNING");
   harl.complain("ERROR");
}