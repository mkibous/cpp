/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkibous <mkibous@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 15:01:48 by mkibous           #+#    #+#             */
/*   Updated: 2024/12/17 14:51:05 by mkibous          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Form::Form() : name("form"), sign(false), grade(50)
{}
Form::Form(const Form &src): name(src.getname()), sign(src.getsign()), grade(src.getgrade())
{}
Form &Form::operator=(const Form &rhs){
    sign = rhs.getsign();
    return(*this);
}
Form::~Form(){}
Form::Form(std::string fname, int fgrade, bool fsign): name(fname), sign(fsign), grade(fgrade)
{
    if (grade < 1)
        throw GradeTooHighException();
    if (grade > 150)
        throw GradeTooLowException();
}
std::string Form::getname() const{
    return name;
}
bool Form::getsign() const{
    return sign;
}
int Form::getgrade() const{
    return grade;
}
void Form::beSigned(Bureaucrat const &obj)
{
    if(this->grade >= obj.getGrade())
        sign = 1;
    else 
        throw GradeTooLowException();
}

std::ostream &operator<<(std::ostream &os, Form &obj)
{
    os << obj.getname() + ", Form grade " << obj.getgrade() << " Form sign " << obj.getsign();
    return os;
}