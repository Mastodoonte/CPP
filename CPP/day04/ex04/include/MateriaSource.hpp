/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 10:31:49 by florianmast       #+#    #+#             */
/*   Updated: 2022/02/24 10:31:50 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_H
#define MATERIASOURCE_H
#include <iostream>
#include <string>

class MateriaSource
{
public:
    MateriaSource();
    ~MateriaSource();
    MateriaSource(MateriaSource const & src); //Constructeur par copie
    MateriaSource & operator=(MateriaSource const & src); //Assignation 

private:

};

#endif