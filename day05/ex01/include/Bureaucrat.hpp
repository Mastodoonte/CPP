/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 11:09:13 by florianmast       #+#    #+#             */
/*   Updated: 2022/03/01 18:24:32 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat
{
public:
    Bureaucrat(std::string name, int rank);
    ~Bureaucrat();
    Bureaucrat(Bureaucrat const &src);  //Constructeur par copie
    Bureaucrat &operator=(const Bureaucrat &src);

    std::string getName(void) const;
    int getGrade(void) const ; 
    void    incrementB(void);
    void    decrementB(void);
    void    signForm(Form &form);
    
   


private:
    const std::string _name;
    int               _rank;
    Bureaucrat(){};

//https://www.tutorialspoint.com/cplusplus/cpp_exceptions_handling.htm#:~:text=A%20C%2B%2B%20exception%20is%20a,try%2C%20catch%2C%20and%20throw.

/*
 *Nous pouvons définir nos propres exceptions en héritant et en surchargeant 
    La fonctionnalité de la classe exception. l'implentation suivante  
    montre comment on pouvez utiliser la classe std::exception pour implémenter 
    notre propre exception et gestion d'erreur de manière standard.

 * Le choix de struct permet d'eviter de specifier le "public" 

 *Ici, what() est une méthode publique fournie par la classe exception et elle a 
    été surchargée par toutes les classes exception enfant. Elle renvoie la cause d'une exception.
 
 *Le retour virtual const char est un pointeur permet de preciser le message d'erreur attaché à l'exeption   */
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
};

std::ostream &operator<<(std::ostream &o, Bureaucrat const &src);

#endif