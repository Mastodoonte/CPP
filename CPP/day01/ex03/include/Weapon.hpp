/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 11:06:46 by florianmast       #+#    #+#             */
/*   Updated: 2022/02/09 16:56:00 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP
#include "HumanB.hpp"

class Weapon{
    private:
      std::string  _type;

    public:
    //Ici le const permet de dire qu'il ne changera de valeur./ 
    std::string const & getType(void) const;
    void        setType(std::string const &type);
    Weapon(std::string const &type);
    ~Weapon(void);
    
    
};

#endif
