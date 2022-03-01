/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 14:14:22 by florianmast       #+#    #+#             */
/*   Updated: 2022/02/22 17:26:30 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"
#include "../include/Dog.hpp"
#include "../include/Cat.hpp"

int main(void)
{
    std::cout << "[           Mandatory test           ]" <<  std::endl << std::endl;
    const Animal* j = new Dog(); 
    const Animal* i = new Cat();
    std::cout << std::endl;
    delete j;
    delete i;
    
    std::cout << std::endl << "[           Own test First part           ]" <<  std::endl << std::endl;
    int k = 0;
    int size = 10;
    Animal *tab[size];
    std::cout << std::endl;
    while (k < 10)
    {
        if ((k % 2) == 0)
        {
            std::cout << k << " " << std::endl;
            tab[k] = new Dog();
            std::cout << std::endl;
        }
        else
        {
            std::cout << k << " " << std::endl;
            tab[k] = new Cat();
            std::cout << std::endl;  
        }
        k++; 
    }
    k = 0;
    while (k < 10)
    {
        std::cout << k << " " << std::endl;
        delete tab[k];
        std::cout << std::endl;
        k++;
    }
    std::cout << "[           Own test second part (Deep copy)           ]" << std::endl;
    std::cout << "[ Instanciation]" <<  std::endl;
    Dog basic;
    {
        std::cout  <<  std::endl << "[ Into the scope We call constructor then assignation operator]" <<  std::endl;
        Dog tmp(basic);
        std::cout  <<  std::endl << "[ Destruction into scope]" << std::endl;

    }
    if (basic.get_brain())
    {
        std::cout << std::endl << "[We do had two brain separate]" << std::endl; 
    }
    std::cout  <<  std::endl << "[ Out of scope]" << std::endl;

    return 0; 
}