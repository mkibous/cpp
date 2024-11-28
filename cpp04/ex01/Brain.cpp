/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkibous <mkibous@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 12:27:50 by mkibous           #+#    #+#             */
/*   Updated: 2024/11/27 12:43:50 by mkibous          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain default constructor called" << std::endl;
}
Brain::Brain(const Brain &src)
{
    for (size_t i = 0; i < 100; i++)
    {
        ideas[i] = src.ideas[i];
    }
    std::cout << "Brain Copy constructor called" << std::endl;
}
Brain &Brain::operator=(const Brain &rhs)
{
    std::cout << "Brain Copy assignment operator called" << std::endl;
    if (this == &rhs)
        return *this;
    for (size_t i = 0; i < 100; i++)
    {
        ideas[i] = rhs.ideas[i];
    }
    return *this;
}
Brain::~Brain()
{
    std::cout << "Brain Destructor called" << std::endl;
}