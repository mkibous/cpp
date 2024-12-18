#pragma once

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
private:
    std::string target;
public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(const ShrubberyCreationForm &src);
    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &rhs);
    ~ShrubberyCreationForm();
    std::string gettarget() const;
    ShrubberyCreationForm(std::string name);
    class FileErrorException : public std::exception
    {
    public:
        const char *what() const throw()
        {
            return "Could not create the file!";
        }
    };
    void execute(Bureaucrat const &executor) const;
};