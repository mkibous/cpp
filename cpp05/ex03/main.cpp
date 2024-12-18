/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkibous <mkibous@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 11:59:45 by mkibous           #+#    #+#             */
/*   Updated: 2024/12/18 17:06:34 by mkibous          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
void leak()
{
    system("leaks exec");
}
int main()
{
    // atexit(leak);
    try
    {
        Intern Bob;
        AForm *rrf;
        rrf = Bob.makeForm("robotomy request", "Bob");
        Bureaucrat b("jemy", 10);
        rrf->beSigned(b);
        rrf->execute(b);
        delete rrf;
    }
    catch (std::exception &e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }
}