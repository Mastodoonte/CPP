/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Tools.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 10:57:41 by florianmast       #+#    #+#             */
/*   Updated: 2022/03/09 11:34:11 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TOOLS_HPP
#define TOOLS_HPP

template <typename T > void swap (T& a, T& b)
{
    T temp = a;
    a = b;
    b = temp;
}

template <typename T > const T &min (T& a, T& b)
{
   if (a > b)
        return (b);
    else
        return (a);
}

template <typename T > const T &max (T& a, T& b)
{
   if (a < b)
        return (b);
    else
        return (a);
}

#endif
