/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkibous <mkibous@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 10:45:00 by mkibous           #+#    #+#             */
/*   Updated: 2024/12/18 14:18:21 by mkibous          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib> // For std::rand() and std::srand()
#include <ctime>   // For std::time()
RobotomyRequestForm::RobotomyRequestForm() : AForm("Robotomy", 72, 45, false)
{
    target = "default";
    std::srand(static_cast<unsigned int> (std::time(nullptr)));
}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) : AForm(src.getname(), src.getgrade(), src.getexec(), src.getsign())
{
    target = src.gettarget();
    std::srand(static_cast<unsigned int> (std::time(nullptr)));
}
RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
{
    target = rhs.gettarget();
    return (*this);
}
RobotomyRequestForm::~RobotomyRequestForm() {}
RobotomyRequestForm::RobotomyRequestForm(std::string name) : AForm("Robotomy", 72, 45, false)
{
    target = name;
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
}
void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    int i = std::rand() % 2;
    checkexec(executor);

    for (int i = 0; i < 5; i++)
    {
        std::cout << "Brrr..." << std::endl;
    }
    i  == 0 ? std::cout << target << " has been robotomized" << std::endl : std::cout << target << "  robotomy failed" << std::endl;
    i++;
}
std::string RobotomyRequestForm::gettarget() const
{
    return target;
}