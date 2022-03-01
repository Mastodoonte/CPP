/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 11:21:43 by florianmast       #+#    #+#             */
/*   Updated: 2022/02/09 16:55:19 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/HumanB.hpp"
#include "../include/Weapon.hpp"

//Ici initialisation avec une string const afin d'initialiser  _type a 
//la valeur weapon (impossible de declarer dans le scope) pour un
Weapon::Weapon(std::string const & type) : _type(type)
{
    ;
}

std::string const & Weapon::getType(void) const
{
    return (this->_type);
}

Weapon::~Weapon(void)
{
    ;
}

//Ici l'initialisation sur la même ligne n'est pas possible pusique seul le constructeur peut le faire
void  Weapon::setType(std::string const &type ) 
{
  this->_type = type;
}
