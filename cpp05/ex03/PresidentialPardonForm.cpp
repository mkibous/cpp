/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkibous <mkibous@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 10:47:19 by mkibous           #+#    #+#             */
/*   Updated: 2024/12/21 19:18:44 by mkibous          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("Presidential", 25, 5, false)
{
    target = "default";
}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) : AForm("Presidential", src.getgrade(), src.getexec(), src.getsign())
{
    target = src.gettarget();
}
PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs)
{
    target = rhs.gettarget();
    return (*this);
}
PresidentialPardonForm::~PresidentialPardonForm() {}
PresidentialPardonForm::PresidentialPardonForm(std::string name) : AForm("Presidential", 25, 5, false)
{
    target = name;
}
void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    checkexec(executor);
    std::cout << target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
std::string PresidentialPardonForm::gettarget() const
{
    return target;
}