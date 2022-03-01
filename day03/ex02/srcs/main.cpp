/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 16:40:05 by florianmast       #+#    #+#             */
/*   Updated: 2022/02/20 15:46:34 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../include/ClapTrap.h"
#include "../include/ScavTrap.h"
#include "../include/FragTrap.h"

int main()
{
   
    std::cout << "         [ Class init ]" << std::endl;
    FragTrap warrior("Viking");
    std::cout << std::endl;
    
    std::cout << "         [ Attack (From Frag) ]" << std::endl;
    warrior.attack("Farmer ");
    std::cout << std::endl;
    
    std::cout << "         [ takes damage (From Frag) ]" << std::endl;
    warrior.takeDamage(20);
    std::cout << std::endl;

    std::cout << "         [ Repairs (From Frag) ]" << std::endl;
    warrior.beRepaired(10);
    std::cout << std::endl;
    
    std::cout << "         [ Guard (From Frag) ]" << std::endl;
    warrior.guardGate();
    warrior.guardGate();
    std::cout << std::endl;
    
    std::cout << "         [ Give me five (From Frag) ]" << std::endl;
    warrior.highFivesGuys();
    std::cout << std::endl;

    std::cout << "         [ Stats left after the war) ]" << std::endl;
    std::cout << "life: " << warrior.get_hp() << std::endl;
    std::cout << "Energy points " << warrior.get_ep() << std::endl;
    std::cout << "Attack damages " << warrior.get_ad() << std::endl;
        
    std::cout << std::endl << "         [ Destruction ]" << std::endl;
}