/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 15:00:36 by florianmast       #+#    #+#             */
/*   Updated: 2022/02/08 18:21:06 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"


Zombie::Zombie(std::string str)
{
    std::cout << "Zombie construction " << str << std::endl;
    this->set_name(str);
    
}
Zombie::~Zombie(void)
{
    
    std::cout << "Zombie destruction => " << this->_name << std::endl;
}

void    Zombie::set_name(std::string str)
{
    this->_name = str;
}

std::string Zombie::get_name(void) const
{
    return (this->_name);
}
void    Zombie::announce(void) const
{
    std::cout << this->get_name() << ": ";
    std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;
}
