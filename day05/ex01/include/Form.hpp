/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmastor <flmastor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 15:37:02 by florianmast       #+#    #+#             */
/*   Updated: 2022/03/14 11:23:12 by flmastor         ###   ########.fr       */
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
private:
    const std::string   _name;
    bool                _signed;
    const int           _rankToSign;
    const int           _rankToExec;
public:
    Form();
    Form(std::string name ,int rankToSign, int rankToExec);
    virtual ~Form();
    Form(Form const &src);  //Constructeur par copie
    Form &operator=(const Form &src);
    
    //Petit rappel sur les getter => const avant declaration signifie que la valeur ne sera pas changeable 
    //à partir de son moment de creation et evite mais évite une copie inutile de l'objet (optimisation)
    //de ce fait il implique que nous renvoyons une reference sur un objet (En gros evite une copie inutile)
    //et que la declaration ne peut se faire dans la fonction 
    // Celui à la fin que la fonction ne modifiera aucune variable into the function 
    std::string         getName(void) const;
    bool                getIfSigned(void)const;
    int                 getIfRankToSigned(void) const;
    int                 getIfRankToExec(void) const;
    void				beSigned(Bureaucrat const &person);

        
    struct GradeTooHighException: public std::exception
    {
        virtual const char* what() const throw() 
        {
            return ("grade is too high for this form ");
        }
    };
    
    struct GradeTooLowException: public std::exception
    {
        virtual const char* what() const throw() 
        {
            return ("grade is too Low for this form ");
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