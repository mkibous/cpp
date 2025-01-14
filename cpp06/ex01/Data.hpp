/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkibous <mkibous@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 09:26:35 by mkibous           #+#    #+#             */
/*   Updated: 2025/01/13 09:32:31 by mkibous          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
class Data
{
private:
    std::string name;
    int age;

public:
    Data();
    Data(int age, std::string name);
    Data(const Data &src);
    Data &operator=(const Data &rhs);
    ~Data();
    void display();
};
