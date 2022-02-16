/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 11:46:03 by florianmast       #+#    #+#             */
/*   Updated: 2022/02/16 09:36:17 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "HumanB.hpp"

class HumanA{
    private:
        std::string _name;
        Weapon &_weapon;

    public:
    HumanA(std::string name, Weapon &weapon);
    ~HumanA(void);
    void    attack(void);
};

#endif