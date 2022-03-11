/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 10:57:41 by florianmast       #+#    #+#             */
/*   Updated: 2022/03/11 12:08:31 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <string>
#include <iostream>
# include <cmath>
# include <algorithm>
# include <limits>

class Span
{
private:
 Span(){;};
 unsigned int       _n;
 std::vector<int>   _numbers;
 
public:
    Span(unsigned int N);
    ~Span();
    Span (const Span &src);
    Span &operator=( const Span &src); 

    unsigned int    getN(void);
    void            addNumber(const int nb);
    unsigned int    shortestSpan(void) const;
    unsigned int    longestSpan(void) const;
    void            display(void);
    
};

#endif
