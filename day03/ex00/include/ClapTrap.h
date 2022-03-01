/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 23:40:44 by florianmast       #+#    #+#             */
/*   Updated: 2022/02/19 23:42:13 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
#define CLAPTRAP_H
#include <iostream>
#include <string>

class ClapTrap
{
private:
    std::string _name;
    unsigned int _hitsPoints;
    unsigned int _energyPoints;
    unsigned int _attackDamage;

public:
    ClapTrap();
    ~ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap & src); //Constructeur par copie
    ClapTrap & operator=(ClapTrap const & src); //Assignation 
    
    std::string    get_name(void);
    void            set_name(std::string name);
    unsigned int    get_hp(void);
    unsigned int    get_ep(void);
    unsigned int    get_ad(void);
    void            set_hp(unsigned int hp);
    void            set_ep(unsigned int ep);
    void            set_ad(unsigned int ad);
    
   
    void    attack(const std::string& target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);

};

//std::ostream & operator<<(std::ostream & cout, ClapTrap const & i);


#endif