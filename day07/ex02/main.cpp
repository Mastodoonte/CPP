/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 13:29:36 by florianmast       #+#    #+#             */
/*   Updated: 2022/03/09 17:53:04 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int main(int, char**)
{  
    std::cout << "TEST WITH INT" << std::endl;
    std::cout << "=============" << std::endl;
    Array<int> numbers(10);
    int i;
    
    i = 0;
    //Conseil : Essayez de compiler int * a = new int(); puis affichez *a. Suite au conseil l'init  est: this->_tab[i] =  T();
    while (i < 10)
    {
        std::cout << numbers[i] << " - ";
        i++;
    }
    std::cout << std::endl;
    std::cout << "=============" << std::endl; 

 
    std::cout << "\nTEST WITH STRING" << std::endl;
    std::cout << "=============" << std::endl;
    Array<std::string> str(10);
    i = 0;
    while (i < 10)
    {
        std::cout << str[i] << " - ";
        i++;
    }
    std::cout << std::endl; 
    std::cout << "=============" << std::endl;

    
    std::cout << "\nTEST FOR ASSIGNATION" << std::endl;
    std::cout << "=============" << std::endl;
    Array<int> nb1(10);
    Array<int> nb2;
    i = 0;
    while (i < 10)
    {
        nb1[i] = i;
        i++;
    }
    while (i < 10)
    {
        std::cout << nb1[i] << " - ";
        i++;
    }
    std::cout << "try to display nb2: \n" ;
    nb2.display();
    nb2 = nb1;
    std::cout << "Assignation  done: \n" ;
    nb1.display();
    nb2.display();
    
    std::cout << std::endl; 
    std::cout << "=============" << std::endl;

    std::cout << "\nTEST FOR COPY " << std::endl;
    std::cout << "=============" << std::endl;
    Array<int> assi(10);
    i = 0;
    while (i < 10)
    {
        assi[i] = i;
        i++;
    }
    Array<int> assi1(assi);
    std::cout << "try to display assi1: \n" ;
    assi1.display();
    assi1 = assi;
    std::cout << " Copy done: \n" ;
    assi.display();
    assi1.display();
    
    std::cout << std::endl; 
    std::cout << "=============" << std::endl;

    std::cout << "\nTEST FOR EMPTY OR NOT GOOD SIZE" << std::endl;
    std::cout << "=============" << std::endl;
    Array<int> wrong;
    try
    {
        wrong[1] = 1;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "=============" << std::endl;
    std::cout << "\nTEST FOR OPERATOR OVERLOAD" << std::endl;
    std::cout << "Good using with good index: " << std::endl;
     try
    {
        std::cout << assi1[5] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "Bad using with bad index: " << std::endl;
    try
    {
        std::cout << assi1[41] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    

    
 
}