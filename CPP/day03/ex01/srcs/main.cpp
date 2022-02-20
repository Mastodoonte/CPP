/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 16:40:05 by florianmast       #+#    #+#             */
/*   Updated: 2022/02/20 14:39:24 by florianmast      ###   ########.fr       */
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
    std::cout << std::endl;
    
    std::cout << "         [ takes damage (From Scap) ]" << std::endl;
    robot.takeDamage(10);
    std::cout << std::endl;

    std::cout << "         [ Repairs (From Scap) ]" << std::endl;
    robot.beRepaired(10);
    std::cout << std::endl;

    std::cout << "         [ Guard ]" << std::endl;
    robot.guardGate();
    robot.guardGate();
    
    std::cout << std::endl << "         [ Destruction ]" << std::endl;
}