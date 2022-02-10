/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 13:32:18 by florianmast       #+#    #+#             */
/*   Updated: 2022/02/10 16:39:45 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
#define KAREN_HPP

#include <iostream>
#include <string>

class Karen{
private:
    void    _debug(void) const;
    void    _info(void) const;
    void    _warning(void) const;
    void    _error(void) const;

public:
    Karen();
    ~Karen();
    void    complain(std::string level) const;
};

#endif