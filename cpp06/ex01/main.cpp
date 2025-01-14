/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkibous <mkibous@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 09:13:34 by mkibous           #+#    #+#             */
/*   Updated: 2025/01/13 09:44:28 by mkibous          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
    Data obj (18, "mehdi");
    Data *ptr = &obj;
    uintptr_t intptr = Serializer::serialize(ptr);
    std::cout << "Pointer as integer: " << intptr << std::endl;
    Data *newPtr = Serializer::deserialize(intptr);
    newPtr->display();
}