/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kid-bouh <kid-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 13:10:36 by kid-bouh          #+#    #+#             */
/*   Updated: 2022/09/20 16:13:57 by kid-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed{
	private:
		int fixed_point;
		static const int nb = 8;
	public:
		Fixed();
		Fixed(const Fixed& fixed);
		Fixed& operator = (const Fixed& fixed);
		~Fixed();
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};

#endif 
