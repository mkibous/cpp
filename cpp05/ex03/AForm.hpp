#pragma once
#include <iostream>
#include "Bureaucrat.hpp"
class Bureaucrat;
class AForm
{
private:
    const std::string name;
    bool sign;
    const int grade;
    const int exec;


public:
    AForm();
    AForm(const AForm &src);
    AForm &operator=(const AForm &rhs);
    virtual ~AForm();
    AForm(std::string name, int grade, int exec, bool sign);
    std::string getname() const;
    bool getsign() const;
    int getgrade() const;
    int getexec() const;
    void checkexec(Bureaucrat const &obj) const;
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
    class FormNotSignedException : public std::exception
    {
    public:
        const char *what() const throw()
        {
            return "The form has not been signed!";
        }
    };
    virtual void execute(Bureaucrat const &executor) const = 0; 
};
std::ostream &operator<<(std::ostream &os, AForm &obj);
