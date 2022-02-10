/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 13:32:25 by florianmast       #+#    #+#             */
/*   Updated: 2022/02/10 18:19:35 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Karen.hpp"

Karen::Karen()
{
    ;
}

Karen::~Karen()
{
    ;
}

void    Karen::_debug(void) const
{
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do !" << std::endl;
    std::cout << std::endl;
}

void    Karen::_info(void) const
{
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
    std::cout << std::endl;
}

void    Karen::_warning(void) const
{
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month." << std::endl;
    std::cout << std::endl;
}

void    Karen::_error(void) const
{
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
    std::cout << std::endl;
}

void    Karen::complain(std::string level) const
{
    int i;
    //Initialisation d'une tableau de pointeur sur 4 fonctions 
   void (Karen::*choice[4]) () const = { &Karen::_debug, &Karen::_info, &Karen::_warning, &Karen::_error};
   //Initialisation d'un tableau pour la comparaison en boucle
   std::string level_complain[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    i = 0;
    while (i < 4)
    {
        if (level_complain[i] == level)
        {
            break;
        }
        i++;
    }
    switch(i)
    {
        case 0:
            _debug();
        case 1:
            _info();
        case 2:
            _warning();
        case 3:
        {
            _error();
            break;
        }
        case 4:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}
