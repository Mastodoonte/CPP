/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 16:40:05 by florianmast       #+#    #+#             */
/*   Updated: 2022/02/20 15:51:43 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../include/ClapTrap.h"
#include "../include/ScavTrap.h"

int main()
{
   // ScavTrap Hybryd1;
    std::cout << "         [ Class init ]" << std::endl;
    ScavTrap robot("Ironman");
    std::cout << std::endl;
    
    std::cout << "         [ Attack (From Scav) ]" << std::endl;
    robot.attack("Hulk ");
      std::cout << "Energy points " << robot.get_ep() << std::endl;
    std::cout << std::endl;
    
    std::cout << "         [ takes damage (From Scap) ]" << std::endl;
    robot.takeDamage(20);
    std::cout << std::endl;

    std::cout << "         [ Repairs (From Scap) ]" << std::endl;
    robot.beRepaired(10);
    std::cout << std::endl;

    std::cout << "         [ Guard ]" << std::endl;
    robot.guardGate();
    robot.guardGate();
    std::cout << std::endl;
    
    std::cout << "         [ Stats left after the war) ]" << std::endl;
    std::cout << "life: " << robot.get_hp() << std::endl;
    std::cout << "Energy points " << robot.get_ep() << std::endl;
    std::cout << "Attack damages " << robot.get_ad() << std::endl;
    
    std::cout << std::endl << "         [ Destruction ]" << std::endl;
}