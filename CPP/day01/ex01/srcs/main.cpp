/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 15:00:35 by florianmast       #+#    #+#             */
/*   Updated: 2022/02/08 20:07:40 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

int     verif(std::string str)
{
    int i;

    i = 0;
    if (str == "\0")
        return (1);
    while (str[i])
    {
        if (str[i] < 48 || str[i] > 57)
            return (1);
        i++;
    }
    return (0);
}


int main(void)
{
    std::string number;
    std::string operation_name;
    Zombie* horde;
    int nb;
    number = "\0";

    while (verif(number) == 1)
    {
        std::cout << "\nHorde creation of Zombies, please write down the number for the invasion :" << std::endl;
        std::cin >> number;
    }
    std::cout << "Horde creation .." << std::endl;
    nb = stoi(number);
    std::cout << "Please enter a name for the operation" << std::endl;
    std::cin >> operation_name;
    horde = zombieHorde(nb, operation_name);
    delete [] horde;
    
    
    return (0);
}