/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkibous <mkibous@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 11:40:23 by mkibous           #+#    #+#             */
/*   Updated: 2024/12/18 13:38:09 by mkibous          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Shrubbery", 145, 137, false) {
    target = "default";
}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) : AForm(src.getname(), src.getgrade(), src.getexec(), src.getsign()) {
    target = src.gettarget();
}
ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
    target = rhs.gettarget();
    return (*this);
}
ShrubberyCreationForm::~ShrubberyCreationForm() {}
ShrubberyCreationForm::ShrubberyCreationForm(std::string name) : AForm("Shrubbery", 145, 137, false) {
    target = name;
}
void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    checkexec(executor);
    std::ofstream file(target + "_shrubbery");
    if (!file.is_open())
        throw FileErrorException();
    file << "       *" << std::endl;
    file << "      ***" << std::endl;
    file << "     *****" << std::endl;
    file << "    *******" << std::endl;
    file << "   *********" << std::endl;
    file << "  ***********" << std::endl;
    file << " *************" << std::endl;
    file << "***************" << std::endl;
    file << "      | |" << std::endl;
    file << "      | |" << std::endl;
    file.close();
}
std::string ShrubberyCreationForm::gettarget() const
{
    return target;
}