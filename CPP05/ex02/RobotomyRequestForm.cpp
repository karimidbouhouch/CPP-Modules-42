/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kid-bouh <kid-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 01:24:34 by kid-bouh          #+#    #+#             */
/*   Updated: 2023/01/17 02:24:37 by kid-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <stdlib.h>
 
RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm(target, 72, 45)
{
    std::cout << "RobotomyRequestForm Constructor" << std::endl;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if (!getSign())
    {
        std::cout << "not signed can't execute !" << "\n";
        return ;
    }
    if (executor.getGrade() > getGradeexec())
        throw(Form::GradeTooLowException());

    std::cout << "brrrrr" << "\n";
    srand(time(NULL));
    if (rand() % 2 == 0)   
        std::cout << getName() << " has been robotomized!\n";
    else
        std::cout << getName() << " faild to get robotomized!\n";

}