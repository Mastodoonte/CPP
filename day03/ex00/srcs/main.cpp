/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 16:40:05 by florianmast       #+#    #+#             */
/*   Updated: 2022/02/20 11:37:32 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../include/ClapTrap.h"

int main()
{
     std::cout << "         [Class init]" << std::endl;
     ClapTrap knight("Aragorn");
     ClapTrap archer;

    archer.set_name("Boromir");

    ClapTrap archer2;
    archer2 = archer;
    archer2.set_name("Legolas");
    std::cout << std::endl << "         [Attacks]" << std::endl;
    knight.attack("An orc ");
    archer.attack("An warg ");
    archer2.attack("A troll ");
    std::cout << std::endl << "         [Damage]" << std::endl;
    knight.takeDamage(0);
    archer.takeDamage(5);
    archer2.takeDamage(14);
    std::cout << std::endl << "         [Reparing]" << std::endl;
     knight.beRepaired(20);
    archer.beRepaired(0);
    archer2.beRepaired(5);
    std::cout << knight.get_name() << std::endl;
    std::cout << std::endl << "         [Destruction] " << std::endl;
}