/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kid-bouh <kid-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 00:10:18 by kid-bouh          #+#    #+#             */
/*   Updated: 2023/01/20 02:02:25 by kid-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

int main(int ac, char **av)
{
    if (ac == 2)
    {
        Conversion c(av[1]);
    }
    else 
    {
        std::cout << "Wrong args !\n";
    }
    return 0;
}