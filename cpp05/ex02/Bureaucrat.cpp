/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkibous <mkibous@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 11:06:24 by mkibous           #+#    #+#             */
/*   Updated: 2024/12/17 15:02:15 by mkibous          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Bureaucrat"), grade(50)
{
}
Bureaucrat::Bureaucrat(const Bureaucrat &src) : name(src.name), grade(src.grade)
{
}
Bureaucrat &Bureaucrat::operator=(const Bureaucrat &rhs)
{
    this->grade = rhs.grade;
    return *this;
}
Bureaucrat::~Bureaucrat() {}
Bureaucrat::Bureaucrat(const std::string Bname, int Bgrade) : name(Bname), grade(Bgrade)
{
    if (grade < 1)
        throw GradeTooHighException();
    if (grade > 150)
        throw GradeTooLowException();
}
std::string Bureaucrat::getName() const
{
    return name;
}
int Bureaucrat::getGrade() const
{
    return grade;
}
void Bureaucrat::operator++()
{
    if (grade == 1)
        throw GradeTooHighException();
    grade--;
}
void Bureaucrat::operator--()
{
    if (grade == 150)
        throw GradeTooLowException();
    grade++;
}

std::ostream &operator<<(std::ostream &os, Bureaucrat &obj)
{
    os << obj.getName() + ", bureaucrat grade " << obj.getGrade();
    return os;
}
void Bureaucrat::signForm(AForm &src)
{
    try
    {
        src.beSigned(*this);
        std::cout << this->getName() << " signed " << src.getname() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << this->getName() << " couldn’t sign " << src.getname() << " because " << e.what() << std::endl;
    }
}
void Bureaucrat::executeForm(AForm const &form) const
{
    try{
        form.execute(*this);
    }
    catch (const std::exception &e)
    {
        std::cout << this->getName() << " couldn’t execute " << form.getname() << " because " << e.what() << std::endl;
    }
}