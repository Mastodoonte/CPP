/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scavtrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 12:25:25 by florianmast       #+#    #+#             */
/*   Updated: 2022/02/20 14:35:12 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
#define SCAVTRAP_H
#include "ClapTrap.h"


class ScavTrap : public ClapTrap
{
public:
    ScavTrap();
    ScavTrap(std::string name);
    ~ScavTrap();
    ScavTrap(ScavTrap const & src); //Constructeur par copie
    ScavTrap & operator=(ScavTrap const & src); //Assignation 
    
    void    attack(const std::string& target);
    void guardGate(void);

private:
    int     guard;

};

#endif