/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkibous <mkibous@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 14:52:21 by mkibous           #+#    #+#             */
/*   Updated: 2024/12/18 17:05:23 by mkibous          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "AForm.hpp"

Intern::Intern() {}
Intern::Intern(const Intern &src)
{
    if (&src == this)
        ;
}
Intern &Intern::operator=(const Intern &rhs)
{
    if (&rhs == this)
        ;
    return (*this);
}
Intern::~Intern() {}
AForm *Intern::makeForm(std::string name, std::string target)
{
    AForm *Forms[3] = {new PresidentialPardonForm(target),
                       new RobotomyRequestForm(target),
                       new ShrubberyCreationForm(target)};
    std::string formname[] = {
        "presidential",
        "robotomy",
        "shrubbery",
    };
    for (size_t i = 0; i < 3; i++)
    {
        if (name.find(formname[i], 0) != std::string::npos)
        {
            std::cout << "Intern creates " << formname[i] << std::endl;
            for (size_t j = 0; j < 3; j++)
            {
                if (j != i)
                    delete Forms[j];
            }

            return (Forms[i]);
        }
    }
    std::cout << name << " Form does not exist" << std::endl;
    for (size_t j = 0; j < 3; j++)
    {
        delete Forms[j];
    }
    return 0;
}