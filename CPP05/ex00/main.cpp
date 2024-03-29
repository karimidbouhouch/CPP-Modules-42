/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kid-bouh <kid-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 18:51:52 by kid-bouh          #+#    #+#             */
/*   Updated: 2023/01/15 20:22:10 by kid-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{    
    try 
    {
        Bureaucrat Director("Director", 1);
        Bureaucrat Staff("Staff", 10);

        std::cout << Director.getName() << ", bureaucrat grade " << Director.getGrade() << std::endl;
        std::cout << Staff.getName() << ", bureaucrat grade " << Staff.getGrade() << std::endl;
        
        Director.decrGrade();
        Staff.incrGrade();
        
        std::cout << Director.getName() << ", bureaucrat grade " << Director.getGrade() << std::endl;
        std::cout << Staff.getName() << ", bureaucrat grade " << Staff.getGrade() << std::endl;
        
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}