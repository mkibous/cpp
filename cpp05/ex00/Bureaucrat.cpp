/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkibous <mkibous@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 11:06:24 by mkibous           #+#    #+#             */
/*   Updated: 2024/12/14 12:58:40 by mkibous          ###   ########.fr       */
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
        GradeTooHighException();
    if (grade > 150)
        GradeTooLowException();
}
std::string Bureaucrat::getName()
{
    return name;
}
int Bureaucrat::getGrade()
{
    return grade;
}
void Bureaucrat::operator++()
{
    if (grade == 1)
        GradeTooHighException();
    grade--;
}
void Bureaucrat::operator--()
{
    if (grade == 150)
        GradeTooLowException();
    grade++;
}

std::ostream &operator<<(std::ostream &os, Bureaucrat &obj)
{
    os << obj.getName() + ", bureaucrat grade " << obj.getGrade();
    return os;
}

void Bureaucrat::GradeTooHighException()
{
    throw std::runtime_error("Grade is too high!");
}
void Bureaucrat::GradeTooLowException()
{
    throw std::runtime_error("Grade is too low!");
}