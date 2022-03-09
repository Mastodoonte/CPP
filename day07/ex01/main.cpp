/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 13:29:36 by florianmast       #+#    #+#             */
/*   Updated: 2022/03/09 14:34:00 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename T> void display(T const &a)
{
    T b = static_cast<T>(a);
    std::cout  << b << std::endl;
}


 int main() 
 {
     unsigned int tab[] = {4, 5, 6, 7, 19, 42};
     unsigned char tab1[] = {'C', 'o', 'r', 'r', 'e', 'c', 't', 'i', 'o', 'n'};
     float tab2[] = {2.42, 23.236, 325.121, 5.124125};
     
     
    std::cout << "TEST WITH U_INT" << std::endl;
    std::cout << "=============" << std::endl;
     iter(tab, sizeof tab/sizeof tab[0], display);
    std::cout << "=============" << std::endl; 
    std::cout << "TEST WITH char" << std::endl;
    std::cout << "=============" << std::endl;
    iter(tab1, sizeof tab1/sizeof tab1[0], display);
    std::cout << "=============" << std::endl; 
    std::cout << "TEST WITH char" << std::endl;
    std::cout << "=============" << std::endl;
    iter(tab1, sizeof tab1/sizeof tab1[0], display);
    std::cout << "=============" << std::endl; 
    std::cout << "TEST WITH long" << std::endl;
    std::cout << "=============" << std::endl;
    iter(tab2, sizeof tab2/sizeof tab2[0], display);
 
     return 0;
}   
