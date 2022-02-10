/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 13:32:22 by florianmast       #+#    #+#             */
/*   Updated: 2022/02/10 18:16:19 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Karen.hpp"

int main(int ac, char **av)
{
    std::string entry;
    Karen karen;
    if (ac == 2)
    {
        entry = av[1];
        
        karen.complain(entry);
    }
    return (0);    
}