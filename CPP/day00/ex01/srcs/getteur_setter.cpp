/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getteur_setter.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 14:59:54 by florianmast       #+#    #+#             */
/*   Updated: 2022/02/08 14:59:55 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Phonebook.hpp"

std::string    contact::get_first_name(void)
{
    return(this->first_name);
}

std::string    contact::get_nickname(void)  
{
    return(this->nickname);
}

std::string    contact::get_phone(void)
{
    return(this->phone_number);
}

std::string    contact::get_secret(void)
{
    return(this->darkest_secret);
}

void    contact::set_first_name(std::string str)
{
    this->first_name = str;
    return ;
}

void    contact::set_nickname(std::string str)
{
    this->nickname = str;
    return ;
}

void    contact::set_phone(std::string str)
{
    this->phone_number = str;
    return ;
}

void    contact::set_secret(std::string str)
{
    this->darkest_secret = str;
    return ;
}