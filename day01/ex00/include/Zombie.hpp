/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 15:01:20 by florianmast       #+#    #+#             */
/*   Updated: 2022/02/16 09:35:49 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>
#include <string>

class Zombie{
    
    private:
        std::string _name;

    public:
        void            announce (void) const;
        void            set_name(std::string str);
        std::string     get_name(void) const;
        Zombie (std::string str);
        ~Zombie(void);
};

Zombie*     newZombie( std::string name);
void        randomChump( std::string name );

#endif