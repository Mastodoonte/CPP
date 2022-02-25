/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 13:58:55 by florianmast       #+#    #+#             */
/*   Updated: 2022/02/25 18:15:10 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AMateria.hpp"

AMateria::AMateria(const std::string &type) 
{
    _item = type;
    std::cout << "Amateria constructor called" << std::endl;
}

AMateria::~AMateria()
{
    ;
}

AMateria::AMateria(AMateria const &src)
{
    *this = src;
}

const std::string	&AMateria::getType( void ) const
{
	return this->_item;
}