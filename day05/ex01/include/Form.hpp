/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 15:37:02 by florianmast       #+#    #+#             */
/*   Updated: 2022/03/02 10:08:10 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    public:
        Form(std::string name ,int rankToSign, int rankToExec);
        virtual ~Form();
        Form(Form const &src);  //Constructeur par copie
        Form &operator=(const Form &src);
    
    //Petit rappel sur les getter => const avant declaration signifie que la valeur ne sera pas changeable à partir de son moment de creation et evite mais évite une copie inutile de l'objet (optimisation)
    //de ce fait il implique que nous renvoyons une reference sur un objet et que la declaration ne peut se faire dans la fonction 
    // Celui à la fin que la fonction ne modifiera aucune variable into the function 
        const std::string getName(void) const;
        const bool        getIfSigned(void)const;
        const int         getIfRankToSigned(void) const;
        const int         getIfRankToExec(void) const;
        void				              beSigned(Bureaucrat const &person);


private:
        std::string _name;
        bool        _signed;
        int         _rankToSign;
        int         _rankToExec;
        Form(){};
        
    struct GradeTooHighException: public std::exception
    {
        virtual const char* what() const throw() 
        {
            return ("His grade is too high for this form ");
        }
    };
    
    struct GradeTooLowException: public std::exception
    {
        virtual const char* what() const throw() 
        {
            return ("His grade is too Low for this form ");
        }
    };
    
    struct FormIsSigned: public std::exception
    {
        virtual const char* what() const throw() 
        {
            return ("this form is signed ");
        }
    };
    
    struct FormIsNotSigned: public std::exception
    {
        virtual const char* what() const throw() 
        {
            return ("This form is not signed ");
        }
    };
};

std::ostream &operator<<(std::ostream &o, Form const &src);


#endif