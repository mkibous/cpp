/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkibous <mkibous@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 11:36:49 by mkibous           #+#    #+#             */
/*   Updated: 2024/12/17 14:59:26 by mkibous          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

AForm::AForm() : name("Aform"), sign(false), grade(50), exec(0)
{
}
AForm::AForm(const AForm &src) : name(src.getname()), sign(src.getsign()), grade(src.getgrade()), exec(src.getexec())
{
}
AForm &AForm::operator=(const AForm &rhs)
{
    sign = rhs.getsign();
    return (*this);
}
AForm::~AForm() {}
AForm::AForm(std::string fname, int fgrade, int fexec, bool fsign) : name(fname), sign(fsign), grade(fgrade), exec(fexec)
{
    if (grade < 1)
        throw GradeTooHighException();
    if (grade > 150)
        throw GradeTooLowException();
}
std::string AForm::getname() const
{
    return name;
}
bool AForm::getsign() const
{
    return sign;
}
int AForm::getgrade() const
{
    return grade;
}
int AForm::getexec() const
{
    return exec;
}
void AForm::checkexec(Bureaucrat const &obj) const
{
    if (!getsign())
        throw FormNotSignedException();
    if (getexec() < obj.getGrade())
        throw GradeTooLowException();
}
void AForm::beSigned(Bureaucrat const &obj)
{
    if (this->grade >= obj.getGrade())
        sign = 1;
    else
        throw GradeTooLowException();
}

std::ostream &operator<<(std::ostream &os, AForm &obj)
{
    os << obj.getname() + ", AForm grade " << obj.getgrade() << " AForm sign " << obj.getsign();
    return os;
}