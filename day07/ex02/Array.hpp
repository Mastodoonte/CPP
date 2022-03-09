/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 10:57:41 by florianmast       #+#    #+#             */
/*   Updated: 2022/03/09 17:39:53 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>
#include <string>


template <typename T>
class Array
{
private:
    T               *_tab;
    unsigned int    _size;
    
    //In this case the exception has to be declared in private otherwise is is defined in the result type of the class (error message)
    struct limitException : public std::exception
    {
        const char * what () const throw()
        {
            return ("Not a good index");
        }
    };

public:

///////*| Constructor |*///////
    Array() : _tab(new T[0]), _size(0)
    {
        ;
    }
    Array(unsigned int n) 
    {
        this->_tab = new T[n];
        this->_size = n;
        unsigned int i;
        i = 0;
        while (i < this->_size)
       {
           this->_tab[i] =  T();
           i++;
       }
    }

    /*| Destructor |*/
    ~Array()
    {
        if (this->_tab)
            delete [] this->_tab;
    }
//////*| Copy constructor |*/////
    /* Deep copy is taken into consideration by renewing a new pointer|*/
    Array (const Array &src)
    {
        this->_size = src._size;
        this->_tab = new T[src._size];
        unsigned int i;

        i = 0;
        while (i < src._size)
        {
            this->_tab[i] = src._tab[i];
            i++;
        }
           
    }
//////*| Assignation copy |*//////
    Array &operator=(const Array &src)
    {
        if (this == &src)
            return (*this);
        else
        {
            unsigned int i ;

            i = 0;
            delete [] this->_tab;
            this->_size = src._size;
            this->_tab = new T[src._size];
            while (i < this->_size)
            {
                this->_tab[i] = src._tab[i];
                i++;
            }
            return (*this);
        }
    }
//////*| Return the size |*/////
    unsigned int size(void) const
    {
        return (this->_size);
    }
//////*| Overload the operator [] |*/////
    T   &operator[](unsigned int index)
    {
        if (index >= this->_size)
            throw limitException();
        else
            return (this->_tab[index]);
    }
    
    const T   &operator[](unsigned int index) const
    {
        if (index >= this->_size)
            throw limitException();
        else
            return (this->_tab[index]);
    }
    void    display(void)
    {
        unsigned int i;

        i = 0;
        while (i < this->_size)
        {
            std::cout << this->_tab[i] << " - " ;
            i++;
        }
        std::cout << std::endl;
    }
};


#endif
