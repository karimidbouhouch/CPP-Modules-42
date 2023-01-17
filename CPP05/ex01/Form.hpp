/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kid-bouh <kid-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 21:16:42 by kid-bouh          #+#    #+#             */
/*   Updated: 2023/01/17 00:40:09 by kid-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
        const std::string _name;
        bool  _sign;
        const int _grade_sign;
        const int _grade_exec;
    public:
        Form();
        Form(const std::string name, const int grade_sign, const int grade_exec);
        Form(const Form & obj);
        Form& operator=(const Form& obj);
        void beSigned(Bureaucrat &obj);
        int getSign();
        std::string getName();
        int getGradesign();
        int getGradeexec();
        ~Form();
        
    class GradeTooHighException : public std::exception
    {
        public:
            const char * what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
        public:
            const char * what() const throw();
    };
};