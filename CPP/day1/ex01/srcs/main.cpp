/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 15:00:18 by florianmast       #+#    #+#             */
/*   Updated: 2022/02/08 15:00:21 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Phonebook.hpp"

int main(int ac, char **av)
{
    Phonebook repertoire;
    std::string buff;
    int cursor;

    (void)av;
    cursor = 0;
    if (ac == 1)
    {
        while (1)
        {
            std::cout << "\n\nWaiting for command" << std::endl;
            std::cout << "You can choose between ADD / SEARCH / EXIT/ SHOW :" << std::endl;
            std::cout << "=>";
             std::cin >> buff;
            if (buff == "ADD\0")
            {
                std::cout << "\nYou have selected ADD .. \n" << std::endl;
                if (cursor == 8)
                    cursor = 0;
                repertoire.new_contact(cursor);
                cursor++;
            }
            else if (buff == "SEARCH\0")
            {
                std::cout << "\nYou have selected SEARCH .. \n" << std::endl;
                 std::cin >> buff;
                 if(repertoire.look_for_contact(buff) > -1)
                    repertoire.display(repertoire.look_for_contact(buff));
            }
            else if (buff == "SHOW\0")
            {
                repertoire.display_all(0);
            }
            else if (buff == "EXIT\0")
                break ;
            else
            {
                std::cout << RED << "Wrong command if you wanna exit please press [CTRL] + [C] or EXIT" << std::endl;
                std::cout << NC;
            }
        }
    }
    return (0);
}