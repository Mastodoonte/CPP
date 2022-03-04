/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 13:37:57 by florianmast       #+#    #+#             */
/*   Updated: 2022/03/04 14:06:17 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <exception>
#include "PresidentialPardonForm.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
private:
	Form*	makeShrubbery(std::string target);
	Form*	makeRobotomy(std::string target);
	Form*	makePardon(std::string target);
public:
    Intern();
    ~Intern();
    Intern(Intern const & src);
    Intern &operator=(const Intern &src);
    Form *makeForm(std::string fname, std::string target);
    
    struct NoMatchingException : public std::exception
    {
        virtual const char* what() const throw() 
        {
            return ("Intern didn't find any match for this form ! ");
        }
    };
};

#endif