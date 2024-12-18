#pragma once

#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
private:
    std::string target;

public:
    RobotomyRequestForm();
    RobotomyRequestForm(const RobotomyRequestForm &src);
    RobotomyRequestForm &operator=(const RobotomyRequestForm &rhs);
    ~RobotomyRequestForm();
    RobotomyRequestForm(std::string name);
    std::string gettarget() const;
    void execute(Bureaucrat const &executor) const;
};