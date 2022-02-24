/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ImateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 10:21:16 by florianmast       #+#    #+#             */
/*   Updated: 2022/02/24 10:29:59 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMateriaSource_H
#define IMateriaSource_H
#include <iostream>
#include <string>

class IMateriaSource
{
public:
    IMateriaSource();
    ~IMateriaSource();
    IMateriaSource(IMateriaSource const & src); //Constructeur par copie
    IMateriaSource & operator=(IMateriaSource const & src); //Assignation 

private:

};

#endif