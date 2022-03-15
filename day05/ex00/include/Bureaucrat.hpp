/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmastor <flmastor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 11:09:13 by florianmast       #+#    #+#             */
/*   Updated: 2022/03/14 13:49:53 by flmastor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H
#include <iostream>
#include <string>
#include <exception>


class Bureaucrat
{
private:
    const std::string _name;
    int               _rank;
    Bureaucrat(){};

public:
    Bureaucrat(std::string name, int rank);
    ~Bureaucrat();
    Bureaucrat(Bureaucrat const &src);  //Constructeur par copie
    Bureaucrat &operator=(const Bureaucrat &src);

    std::string getName(void) const;
    int getGrade(void) const ; 
    void    incrementB(void);
    void    decrementB(void);
    

};

//https://www.tutorialspoint.com/cplusplus/cpp_exceptions_handling.htm#:~:text=A%20C%2B%2B%20exception%20is%20a,try%2C%20catch%2C%20and%20throw.

/*
 *Nous pouvons définir nos propres exceptions en héritant et en surchargeant 
    La fonctionnalité de la classe exception. l'implentation suivante  
    montre comment on peut utiliser la classe std::exception pour implémenter 
    notre propre exception et la gestion d'erreur de manière standard.

 * Le choix de struct permet d'eviter de specifier le "public" 

 *Ici, what() est une méthode publique fournie par la classe exception et elle a 
    été surchargée par toutes les classes exception enfant. Elle renvoie la cause d'une exception.
 
 *Le retour virtual const char est un pointeur qui permet de preciser le message d'erreur attaché à l'exeption   */
struct GradeTooHighException: public std::exception
{
      virtual const char* what() const throw() 
      {
        return ("His grade is too high .. he is already the supreme chief ");
      }
  };

struct GradeTooLowException: public std::exception
{
    virtual const char* what() const throw()
    {
        return ("His grade is too low he is at the lowest grade, show him some respect !");
    }
};

std::ostream &operator<<(std::ostream &o, Bureaucrat const &src);

#endif