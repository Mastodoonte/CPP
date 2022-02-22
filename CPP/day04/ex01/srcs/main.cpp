/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 14:14:22 by florianmast       #+#    #+#             */
/*   Updated: 2022/02/22 11:39:46 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"
#include "../include/Dog.hpp"
#include "../include/Cat.hpp"

int main(void)
{
   /* const Animal* j = new Dog(); 
    const Animal* i = new Cat();
    std::cout << std::endl;
    delete j;//should not create a leak delete i;
    
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
    }*/
    std::cout << "[ Own test second part ]" <<  std::endl << std::endl;
    Dog basic;
    {
        std::cout << "Here the importance of the copy of a pointer is real, it is important to review its constructors when initialize pointers" <<  std::endl;
        std::cout << std::endl;
        Dog tmp(basic);
    }
    
    return 0; 
}