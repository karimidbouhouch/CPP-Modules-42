/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kid-bouh <kid-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 18:54:05 by kid-bouh          #+#    #+#             */
/*   Updated: 2023/01/09 14:27:14 by kid-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal( "Cat" )
{
    std::cout << "Cat Default Constructor" << std::endl;
}

Cat::Cat(Cat& obj)
{
    std::cout << "Cat Copy Constructor" << std::endl;
    this->type = obj.type;
}

Cat& Cat::operator=(const Cat& obj)
{
    std::cout << "Cat Copy assignment operator" << std::endl;
    if(this != &obj)
    {
        this->type = obj.type;
    }
    return *this;
}

Cat::~Cat()
{
    std::cout << "Cat Destructor" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Myaw sound" << std::endl;
}
