#pragma once
#include <iostream>
#include "Bureaucrat.hpp"
class Bureaucrat;
class Form
{
private:
    const std::string name;
    bool sign;
    const int grade;

public:
    Form();
    Form(const Form &src);
    Form &operator=(const Form &rhs);
    ~Form();
    Form(std::string name, int grade, bool sign);
    std::string getname() const;
    bool getsign() const;
    int getgrade() const;
    void beSigned(Bureaucrat const &obj);
    class GradeTooHighException : public std::exception
    {
    public:
        const char *what() const throw()
        {
            return "Grade is too high !";
        }
    };
    class GradeTooLowException : public std::exception
    {
    public:
        const char *what() const throw()
        {
            return "Grade is too low!";
        }
    };
};
std::ostream &operator<<(std::ostream &os, Form &obj);
