#pragma once
#include <stdexcept>
#include <iostream>
class Bureaucrat 
{
private:
    const std::string name;
    int grade;

public:
    Bureaucrat();
    Bureaucrat(const Bureaucrat &src);
    Bureaucrat &operator=(const Bureaucrat &rhs);
    ~Bureaucrat();
    Bureaucrat(const std::string Bname, int Bgrade);
    std::string getName();
    int getGrade();
    void operator++(void);
    void operator--(void);
    static void GradeTooHighException();
    static void GradeTooLowException();
};
std::ostream &operator<<(std::ostream &os, Bureaucrat &obj);