/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 15:31:33 by florianmast       #+#    #+#             */
/*   Updated: 2022/03/03 10:59:38 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <fstream>
#include "Bureaucrat.hpp"



class ShrubberyCreationForm : public Form
{
public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(std::string target);
    ~ShrubberyCreationForm();
    ShrubberyCreationForm(const ShrubberyCreationForm &src);  //Constructeur par copie
    ShrubberyCreationForm &operator=(ShrubberyCreationForm const &src);
    
    void	ft_do() const;
    //void			executeForm(Form &form);
    
    struct FormIsNotOpenable: public std::exception
    {
        virtual const char* what() const throw() 
        {
            return ("This form fd is not openable");
        }
    };
   


private:

};

#endif