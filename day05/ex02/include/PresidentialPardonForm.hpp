/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 12:05:41 by florianmast       #+#    #+#             */
/*   Updated: 2022/03/03 13:14:45 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_H
#define PRESIDENTIALPARDONFORM_H

#include "Bureaucrat.hpp"

class PresidentialPardonForm : public Form
{
private:

public:
    PresidentialPardonForm();
    PresidentialPardonForm(std::string target);
    ~PresidentialPardonForm();
    PresidentialPardonForm(PresidentialPardonForm const &src);
    PresidentialPardonForm &operator=(PresidentialPardonForm const &src);
    void	ft_do() const;
   



};

#endif