/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 10:44:33 by florianmast       #+#    #+#             */
/*   Updated: 2022/03/10 11:44:02 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main ()
{
    //Different way of init a vector
    //https://www.geeksforgeeks.org/initialize-a-vector-in-cpp-different-ways///
    std::vector<int> test1;

    test1.push_back(10);
    test1.push_back(11);
    test1.push_back(12);
    test1.push_back(13);
    test1.push_back(14);
    test1.push_back(15);

    try
    {
        std::cout << "Bad test" << std::endl;
        easyfind(test1, 4);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
       std::cout << "\nGood test" << std::endl;
        easyfind(test1, 14);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}
