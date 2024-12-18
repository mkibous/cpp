#pragma once
#include <iostream>
#include "Form.hpp"
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
    std::string getName() const;
    int getGrade() const;
    void operator++(void);
    void operator--(void);
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
    void signForm(Form &src);
};
std::ostream &operator<<(std::ostream &os, Bureaucrat &obj);