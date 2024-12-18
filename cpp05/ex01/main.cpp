/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkibous <mkibous@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 11:59:45 by mkibous           #+#    #+#             */
/*   Updated: 2024/12/16 18:00:40 by mkibous          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
int main()
{
    try
    {
        Form bob("Bob", 50, 0);
        Bureaucrat med("med", 49);
        bob.beSigned(med);
        std::cout << bob << std::endl;
        med.signForm(bob);
    }
    catch (std::exception &e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }
    std::cout << std::endl;
    try
    {
        Form bob("Bob", 50, 0);
        Bureaucrat med("med", 51);
        std::cout << bob << std::endl;
        med.signForm(bob);
    }
    catch (std::exception &e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }
    return 0;
}