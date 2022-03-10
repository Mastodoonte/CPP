/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 10:57:41 by florianmast       #+#    #+#             */
/*   Updated: 2022/03/10 11:44:41 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <string>
#include <vector>

//T est un container d'entier
// On doit trouver le premier element de element dans tab

/*| STL ALGORYTHM|*/
/*
*https://en.cppreference.com/w/cpp/algorithm
https://www.cplusplus.com/reference/algorithm/find/
find - find_if 
finds the first element satisfying specific criteria 
(function template)
*/

/*| ITERATORS |*/
/*
*Iterator is used has a pointer to run into the vector
*/


template <typename T> std::vector<int>::iterator easyfind(T &tab, int element)
{
    std::vector<int>::iterator it;
    it = find (tab.begin(), tab.end(), element);
    if (it != tab.end())
    {
        std::cout << "==================================\n";
        std::cout << "Element found\n";
        std::cout << "Element value = " << *it << std::endl;
        std::cout << "==================================\n";
    }
    else
    {
       // https://stackoverflow.com/questions/12261915/how-to-throw-stdexceptions-with-variable-messages
        throw std::runtime_error(std::string("Element not found\n"));
    }
    return (it);
}

std::ostream &operator<<(std::ostream &o, std::vector<int>::iterator &it)
{
    o << "==================================\n";
    o << "Element found\n";
    o << "Element value = " << *it << std::endl;
    o << "Memory emplacement for it = " << &(*it) << std::endl;
    o << "==================================\n";
    return (o);
}

#endif