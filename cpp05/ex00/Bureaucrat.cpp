/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkibous <mkibous@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 11:06:24 by mkibous           #+#    #+#             */
/*   Updated: 2024/12/17 14:50:05 by mkibous          ###   ########.fr       */
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
    this->grade = rhs.getGrade();
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