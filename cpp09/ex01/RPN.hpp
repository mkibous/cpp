/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkibous <mkibous@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 16:12:24 by mkibous           #+#    #+#             */
/*   Updated: 2025/03/07 14:38:54 by mkibous          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <list>
class RPN
{
private:
std::list<double> data;
void calculate(char op);

public:
    RPN();
    RPN(const RPN &src);
    RPN(std::string numbers);
    RPN &operator=(const RPN &src);
    ~RPN();
    double getresult() const;
};