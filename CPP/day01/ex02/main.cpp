/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 10:16:24 by florianmast       #+#    #+#             */
/*   Updated: 2022/02/09 10:47:56 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
    std::cout << "Declaration of str, *str_ptr, &str_REF" << std::endl;
    std::string str = "HI THIS IS BRAIN";
    std::string *str_PTR = &str;
    const std::string& str_REF = str;
    
    std::cout << std::endl;
    std::cout << "Display the adress of the string from the above declaration" << std::endl;
    std::cout << "str    : "<< &str << std::endl;
    std::cout << "str_PTR: "<< str_PTR << std::endl;
    std::cout << "str_REF: "<< &str_REF << std::endl;
    std::cout << std::endl;
    std::cout << "Display of the value of the above declaration" << std::endl;
    std::cout << "str    : " << str << std::endl;
    std::cout << "str_PTR: " << *str_PTR << std::endl;
    std::cout << "str_REF: "<< str_REF << std::endl;
}