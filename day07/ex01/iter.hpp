/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 10:57:41 by florianmast       #+#    #+#             */
/*   Updated: 2022/03/09 14:35:39 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>
//https://www.enseignement.polytechnique.fr/informatique/INF478/docs/Cpp/en/cpp/language/template_parameters.html//

//Ici la declaration est comme suit : 
//->template : Le mot-clé template prévient le compilateur que la prochaine chose dont on va lui parler sera générique.
//-> Les symboles < et > sont la semantique des templates.
//->Le mot-clé typename indique au compilateur que T sera le nom que l'on va utiliser pour notre "type spécial" qui remplace n'importe quoi. (typedef en quelques sorte)

template<typename T> void iter(T const *array, int const len, void(*function)(T const &index))
{
  int i;

  i = 0;
  while (i < len)
  {
    (function)(array[i]);
    i++;
  }
}
#endif
