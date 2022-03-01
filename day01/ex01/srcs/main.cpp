/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 15:00:35 by florianmast       #+#    #+#             */
/*   Updated: 2022/02/16 11:13:49 by florianmast      ###   ########.fr       */
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
    if (str.length() > 2)
        return (1);
    return (0);
}

int     ft_stoi(std::string str)
{
    int i = 0;
    if (str.length() == 1)
    {
        i = i + (str[0] - 48);
    }
    else if (str.length() == 2)
    {
        i = (str[0] - 48) * 10;
        i = i + (str[1] - 48);
    }
    return (i);
 }

int main(void)
{
    std::string number;
    std::string operation_name;
   Zombie* horde;
    int nb;
    
    while (verif(number) == 1)
    {
        std::cout << "\nHorde creation of Zombies, please write down the number for the invasion (from 1 to 99):" << std::endl;
        std::getline(std::cin, number);
    }
    std::cout << "Horde creation .." << std::endl;
    nb = ft_stoi(number);
    std::cout << "Please enter a name for the operation" << std::endl;
    std::getline(std::cin,operation_name);
    horde = zombieHorde(nb, operation_name);
    delete [] horde;    
    return (0);
}