/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 14:55:05 by florianmast       #+#    #+#             */
/*   Updated: 2022/02/20 15:18:38 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
#define FRAGTRAP_H
#include "ClapTrap.h"

class FragTrap : public ClapTrap
{
public:
    FragTrap();
    FragTrap(std::string name);
    ~FragTrap();
    FragTrap(FragTrap const & src); //Constructeur par copie
    FragTrap & operator=(FragTrap const & src); //Assignation 
    
    void    attack(const std::string& target);
    void guardGate(void);
    void highFivesGuys(void);
    

private:
    int _guard;
};

std::ostream &  operator<<( std::ostream & o, FragTrap const & i);

#endif