/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 11:21:30 by florianmast       #+#    #+#             */
/*   Updated: 2022/02/09 17:00:28 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->_name = name;
    this->_weapon = NULL;
}

HumanB::~HumanB(void)
{
    ;
}

void    HumanB::setWeapon(Weapon &type)
{
     this->_weapon = &type;
}

void    HumanB::attack(void)
{
    if (this->_weapon == NULL)
    {
        std::cout << this->_name << " attacks with no Weapon (*Weapon == NULL) " <<  std::endl;
    }
    else
    {
        std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
    }
}