/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmastor <flmastor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 15:00:18 by florianmast       #+#    #+#             */
/*   Updated: 2022/02/15 11:30:32 by flmastor         ###   ########.fr       */
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
        std::cout << "\n\nWaiting for command" << std::endl;
        std::cout << "You can choose between ADD / SEARCH / EXIT/ SHOW :" << std::endl;
        while (1)
        {
            std::getline(std::cin, buff);
            if (buff == "ADD")
            {
                std::cout << "\nYou have selected ADD .. \n" << std::endl;
                if (cursor == 8)
                    cursor = 0;
                repertoire.new_contact(cursor);
                cursor++;
                std::cout << "\n\nWaiting for command" << std::endl;
                std::cout << "You can choose between ADD / SEARCH / EXIT/ SHOW :" << std::endl;
            }
            else if (buff == "SEARCH")
            {
                std::cout << "\nYou have selected SEARCH .. \n" << std::endl;
                 std::getline(std::cin, buff);
                 if(repertoire.look_for_contact(buff) > -1)
                    repertoire.display(repertoire.look_for_contact(buff));
                std::cout << "\n\nWaiting for command" << std::endl;
            std::cout << "You can choose between ADD / SEARCH / EXIT/ SHOW :" << std::endl;
            }
            else if (buff == "SHOW")
            {
                repertoire.display_all(0);
                std::cout << "\n\nWaiting for command" << std::endl;
            std::cout << "You can choose between ADD / SEARCH / EXIT/ SHOW :" << std::endl;
            }
            else if (buff == "EXIT")
            {
                break ;
            }
            else
            {
            //    std::cout << RED << "Wrong command if you wanna exit please press [CTRL] + [C] or EXIT" << std::endl;
             //   std::cout << NC;
             std::cout << "=>";
            }
        }
    }
    return (0);
}
