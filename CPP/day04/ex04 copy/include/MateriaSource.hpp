/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 17:49:36 by florianmast       #+#    #+#             */
/*   Updated: 2022/02/28 10:34:47 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_H
#define MATERIASOURCE_H
#include <iostream>
#include <string>

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    
public:
    MateriaSource();
    ~MateriaSource();
    MateriaSource(const MateriaSource &src); //Constructeur par copie
    MateriaSource &operator=(const MateriaSource &src); //Assignation 

    virtual void learnMateria(AMateria* materialToLearn);
    virtual AMateria* createMateria(std::string const &type);

private:
    AMateria    *_materia[4];
    unsigned int         _learned;
    
};

#endif