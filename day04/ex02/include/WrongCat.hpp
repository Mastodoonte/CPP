/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 14:28:27 by florianmast       #+#    #+#             */
/*   Updated: 2022/03/04 09:46:10 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
    WrongCat(void);
    ~WrongCat();
    WrongCat(const WrongCat & src); //Constructeur par copie
    WrongCat & operator=(WrongCat const & src); //Assignation 

    void    makeSound(void) const;

private:

};

#endif