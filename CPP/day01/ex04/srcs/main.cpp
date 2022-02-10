/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:08:35 by florianmast       #+#    #+#             */
/*   Updated: 2022/02/10 12:05:03 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <filesystem>

void strreplace(std::string *line, const std::string s1, const std::string s2 )
{
    unsigned long position;
    position = line->find(s1);
    while (position != (std::string::npos))
    {
        if(position == std::string::npos )
            break;
        line->erase(position, s1.length());
        line->insert(position, s2);
        position = line->find( s1, position);
    }
}


int main(int ac, char **av)
{
    std::string line;
    std::string mot;
    std::string old_name;
    if (ac == 4)
    {
        std::ifstream ifs(av[1]);
        if (!ifs || ifs.fail() || !ifs.good()|| ifs.peek() == std::ifstream::traits_type::eof())
        {
            std::cout << "error: file doesn't exist or do not have the good permissions" << std::endl;
            return (1);
        }
        
        old_name = av[1];
        std::ofstream end_fd(old_name + ".replace");
        while (std::getline(ifs, line))
        {
            if (ifs)
            {
                strreplace(&line, av[2], av[3]);
                end_fd << line << std::endl;
            }
            else
            {
                std::cout << "Error: impossible to open the file" << std::endl;
            }
        }
        ifs.close();
        end_fd.close();
    }
    else
        std::cout << "Bad arguments" << std::endl;
}
