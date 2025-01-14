/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkibous <mkibous@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 09:29:56 by mkibous           #+#    #+#             */
/*   Updated: 2025/01/13 09:45:04 by mkibous          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data()
{
    age = 0;
    name = "undefined";
}
Data::Data(int age, std::string name){
    this->age = age;
    this->name = name;
}
Data::Data(const Data &src){
    this->age = src.age;
    this->name = src.name;
}
Data &Data::operator=(const Data &rhs){
    if(this != &rhs)
    {
        this->age = rhs.age;
        this->name = rhs.name;
    }
    return *this;
}
Data::~Data(){}
void Data::display(){
    std::cout << "name: " << name << ", age: " << age << std::endl;
}