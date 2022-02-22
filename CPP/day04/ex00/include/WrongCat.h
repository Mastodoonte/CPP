/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 14:28:27 by florianmast       #+#    #+#             */
/*   Updated: 2022/02/21 16:43:13 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_H
#define WRONGCAT_H

#include "WrongAnimal.h"

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