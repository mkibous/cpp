#pragma once
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
class AForm;
class PresidentialPardonForm;
class RobotomyRequestForm;
class ShrubberyCreationForm;
class Intern
{
private:
public:
    Intern();
    Intern(const Intern &src);
    Intern &operator=(const Intern &rhs);
    ~Intern();
    AForm *makeForm(std::string name, std::string target);
};
