/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 11:07:20 by florianmast       #+#    #+#             */
/*   Updated: 2022/02/09 16:53:45 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"
#include "HumanA.hpp"

class HumanB{
    private:
        std::string _name;
        Weapon *_weapon;
        

    public:
        HumanB(std::string name);
        ~HumanB(void);
        void    setWeapon(Weapon &weapon);
        void    getWeapon(Weapon &weapon);
        void    attack(void);
    
};
#endif