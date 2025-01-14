/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkibous <mkibous@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 10:24:30 by mkibous           #+#    #+#             */
/*   Updated: 2025/01/13 10:57:28 by mkibous          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main()
{
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    Base *ptr = generate();
    identify(ptr);
    identify(*ptr);
    delete ptr;
}