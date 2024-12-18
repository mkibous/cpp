/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkibous <mkibous@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 11:59:45 by mkibous           #+#    #+#             */
/*   Updated: 2024/12/17 13:28:14 by mkibous          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

int main()
{
    try
    {
        ShrubberyCreationForm bob("Bob");
        Bureaucrat b("jemy", 10);
        bob.beSigned(b);
        b.executeForm(bob);
    }
    catch (std::exception &e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }
    std::cout << std::endl;
    try
    {
        RobotomyRequestForm bob("Bob");
        Bureaucrat b("jemy", 35);
        bob.beSigned(b);
        bob.execute(b);
        b.executeForm(bob);
    }
    catch (std::exception &e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }
    std::cout << std::endl;
    try
    {
        PresidentialPardonForm bob("Bob");
        Bureaucrat b("jemy", 5);
        b.executeForm(bob);
    }
    catch (std::exception &e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }
    std::cout << std::endl;
    try
    {
        PresidentialPardonForm bob("Bob");
        Bureaucrat b("jemy", 5);
        bob.beSigned(b);
        b.executeForm(bob);
    }
    catch (std::exception &e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }
}