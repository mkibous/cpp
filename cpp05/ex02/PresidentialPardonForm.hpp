#pragma once

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
private:
std::string target;
public:
    PresidentialPardonForm();
    PresidentialPardonForm(const PresidentialPardonForm &src);
    PresidentialPardonForm &operator=(const PresidentialPardonForm &rhs);
    ~PresidentialPardonForm();
    PresidentialPardonForm(std::string name);
    std::string gettarget() const;
    void execute(Bureaucrat const &executor) const;
};