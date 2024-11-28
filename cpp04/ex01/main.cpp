/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkibous <mkibous@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 11:34:01 by mkibous           #+#    #+#             */
/*   Updated: 2024/11/27 13:21:29 by mkibous          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
// void leak()
// {
//     system("leaks animal");
// }

int main()
{
    // atexit(leak);
    // Cat cat;
    // Dog dog;
    // Cat cat2(cat);
    // Dog dog2(dog);
    // Cat cat3;
    // Dog dog3;
    // cat3 = cat;
    // dog3 = dog;
    const Animal *j = new Dog();
    const Animal *i = new Cat();
    std::cout << std::endl;
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << std::endl;
    i->makeSound();
    j->makeSound();
    std::cout << std::endl;
    delete j;
    delete i;
    return 0;
}