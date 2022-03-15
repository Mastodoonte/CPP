/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmastor <flmastor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 15:05:14 by florianmast       #+#    #+#             */
/*   Updated: 2022/03/15 20:03:47 by flmastor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ConversionS.hpp"

/*
Le programme prend en parametre une chaine littéral doit faire partie d’un des types scalaires suivants : char, int, float ou double. 

Prendre en compte -inff et +inff (les infinis positifs et negatifs)
nanf = Returns a quiet NaN (Not-A-Number) value of type float.

*/

void    conv_treat(char *input, std::string str)
{

    ConversionS conversion(input);
    try
    {
        conversion.check(input, str);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        exit(1);
    }
    std::string inputt;

    inputt = input;
    const std::string s1 = "nanf";
    const std::string s2 = "+inf";
    const std::string s3 = "-inf";
    const std::string s4 = "nan";
    const std::string s5 = "inf";
    const std::string s6 = "inff";
    const std::string s7 = "+inff";
    const std::string s8 = "-inff";

  //std::cout << "float display function called" << std::endl;
  if (input == s1 || input == s2 || input == s3 || input == s4 || input == s5 || input == s6 || input == s7 || input == s8) 
  {
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    if (input == s1 || input == s6 || input == s7 || input == s8)
        std::cout << "float: " << input  << std::endl;
    else
        std::cout << "float: " << input << "f" << std::endl;
    if (input == s1 || input == s6 || input == s7 || input == s8)
          std::cout << "double: " << inputt.substr(0, inputt.length() - 1) << std::endl;
    else
        std::cout << "double: " << input << std::endl;
    return ;
  }
  else
  { 
    try//char
    {
        char c;
          
        c = static_cast<char>(conversion);
        std::cout << "char: '" << c << "'" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try//Int
    {
      int resI;
          
        resI = static_cast<int>(conversion);
        std::cout << "int: " << resI << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    //std::cout << std::setprecision(1) << std::fixed;
    try//Float
    {
        std::cout << "float: " << conversion.toFloat() << "f" << std::endl;   
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try//Double
    {
        std::cout << "double: " << conversion.toDouble() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
  }
}

int main(int ac, char **av)
{
   std::string input;
    
    if (ac == 2)
    {
        input = av[1];
        if (!(input.empty()))
        {
            conv_treat(av[1], av[1]);
            return (0);
        }
        std::cerr << "Error\nPlease give to the program a treatable input" << std::endl;
        return (-1);
    }
    std::cerr << "Error\nPlease give to the program an input" << std::endl;
    return (-1);
}

