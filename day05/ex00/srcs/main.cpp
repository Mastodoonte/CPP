/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 10:57:41 by florianmast       #+#    #+#             */
/*   Updated: 2022/03/02 10:28:22 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "../include/Bureaucrat.hpp"

int main(void)
{
    std::cout << "[-- TEST OF NORMAL EMPLOYEE --]" << std::endl;
    Bureaucrat test("Florian", 13);
    std::cout << std::endl << "[ Increment ]" << std::endl;
    test.incrementB();
    std::cout << test << std::endl;
    std::cout << std:: endl << "[ Decrement ]" << std::endl;
    test.decrementB();
    std::cout << test << std::endl;
    //==================================================================//
    
    std::cout << std::endl <<  "[-- TEST WITH ERROR --]" << std::endl;
    try
    {
         std::cout << "[ first error init with 0]" << std::endl;
         Bureaucrat test1("CHIEF", 0);
    }
    catch(const std::exception& exeption)
    {
        std::cerr << exeption.what() << std::endl;
    }
    try
    {
         std::cout << "[ second error init with 151]" << std::endl;
         Bureaucrat test1("BASIC", 151);
    }
    catch(const std::exception& exeption)
    {
        std::cerr << exeption.what() << std::endl;
    }
    //==================================================================//
    
    std::cout << std::endl << "[-- TEST OF NORMAL NUMER 0 --]" << std::endl;
    Bureaucrat test2("CHIEF", 1);
    try
    {
        std::cout << "[ Increment ]" << std::endl;
        test2.incrementB();
    }
    catch(const std::exception& expetion)
    {
        std::cerr << expetion.what() << std::endl;
    }
    std::cout << test2 << std::endl;
 //==================================================================//
    std::cout << std::endl << "[-- TEST OF NORMAL NUMER 150 --]" << std::endl;
    Bureaucrat test3("BASIC", 150);
    try
    {
        std::cout << "[ Decrement ]" << std::endl;
        test3.decrementB();
    }
    catch(const std::exception& exeption)
    {
        std::cerr << exeption.what() << std::endl;
    }
    std::cout << test3 << std::endl;
    std::cout << std::endl <<  "[-- DESTRUCTION --]" << std::endl;
    
}

