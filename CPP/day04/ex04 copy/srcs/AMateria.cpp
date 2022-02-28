/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 13:58:55 by florianmast       #+#    #+#             */
/*   Updated: 2022/02/28 14:21:00 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AMateria.hpp"

AMateria::AMateria(std::string const &type) 
{
    _item = type;
    std::cout << "String constructor for AMateria called CHANGE Amateria constructor called" << std::endl;
}

const std::string	&AMateria::getType( void ) const
{
	return this->_item;
}

AMateria::AMateria(AMateria const &src)
{
        *this = src; 
}

AMateria &AMateria::operator=(AMateria const & src)
{
    if (this == &src)
        return (*this);
    else
    {
        this->_item = src._item;
        return (*this);
    }
}