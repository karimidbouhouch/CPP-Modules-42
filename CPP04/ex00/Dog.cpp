/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kid-bouh <kid-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 18:53:57 by kid-bouh          #+#    #+#             */
/*   Updated: 2023/01/09 15:22:33 by kid-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal( "Dog" )
{
    std::cout << "Dog Default Constructor" << std::endl;
}

Dog::Dog(Dog& obj)
{
    std::cout << "Dog Copy Constructor" << std::endl;
    this->type = obj.type;
}

Dog& Dog::operator=(const Dog& obj)
{
    std::cout << "Dog Copy assignment operator" << std::endl;
    if(this != &obj)
    {
        this->type = obj.type;
    }
    return *this;
}

Dog::~Dog()
{
    std::cout << "Dog Destructor" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Bark sound" << std::endl;
}
