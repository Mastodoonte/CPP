/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 11:09:13 by florianmast       #+#    #+#             */
/*   Updated: 2022/03/03 10:50:46 by florianmast      ###   ########.fr       */
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
 private:
    const std::string _name;
    int               _rank;
    Bureaucrat(){};
    
public:
    Bureaucrat(std::string name, int rank);
    ~Bureaucrat();
    Bureaucrat(Bureaucrat const &src);
    Bureaucrat &operator=(const Bureaucrat &src);

    std::string     getName(void) const;
    int             getGrade(void) const ; 
    void            incrementB(void);
    void            decrementB(void);
    void            signForm(Form &form);

    void            executeForm(Form const &form);
  
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