/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkibous <mkibous@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 10:12:14 by mkibous           #+#    #+#             */
/*   Updated: 2025/01/13 10:53:24 by mkibous          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib> // For std::rand()
Base::~Base() {}
Base *generate(void)
{
    int i = std::rand() % 3;
    Base *ptr[3] = {new A, new B, new C};
    for (int j = 0; j < 3; j++)
    {
        if (j != i)
            delete ptr[j];
    }
    return ptr[i];
}
void identify(Base *p)
{
    std::string name = "";
    if (A *a = dynamic_cast<A *>(p))
        name = "A";
    if (B *b = dynamic_cast<B *>(p))
        name = "B";
    if (C *c = dynamic_cast<C *>(p))
        name = "C";
    std::cout << "Actual type: " << name << std::endl;
}
void identify(Base &p)
{
    std::string name = "";
    try
    {
        A &a = dynamic_cast<A &>(p);
        name = "A";
        (void)a;
    }
    catch (const std::bad_cast &e)
    {
    }
    try
    {
        B &b = dynamic_cast<B &>(p);
        name = "B";
        (void)b;
    }
    catch (const std::bad_cast &e)
    {
    }
    try
    {
        C &c = dynamic_cast<C &>(p);
        name = "C";
        (void)c;
    }
    catch (const std::bad_cast &e)
    {
    }
    std::cout << "Actual type: " << name << std::endl;
}