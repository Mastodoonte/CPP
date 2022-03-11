/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <florianmastorakis@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 10:57:41 by florianmast       #+#    #+#             */
/*   Updated: 2022/03/11 12:12:23 by florianmast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N) : _n(N)
{
    std::cout << "Default constructor called with: " << N << " elements !" << std::endl;
}

Span::~Span()
{
    std::cout << "Default Destructor called " << std::endl;
}

Span::Span(Span const &src)
{
    std::cout << "Copy constructor called " << std::endl;
    this->_n = src._n;
    this->_numbers = src._numbers;
}

Span &Span::operator=(const Span &src)
{
     std::cout << "Asssignation operator called " << std::endl;
    if (this == &src)
        return (*this);
    //Verification si les deux sont identiques, sinon on clean proprement le vecteur
    this->_numbers.clear();
    this->_n = src._n;
    this->_numbers = src._numbers;
    return (*this);
}

unsigned int    Span::getN(void)
{
    return (this->_n);
}

void    Span::addNumber(const int nb) 
{
    if (_numbers.size() < this->_n)
    {
        this->_numbers.push_back(nb);
    }
    else
    {
        throw std::runtime_error(std::string("Not enough room anymore into the vector \n"));
    }
}

/*Elles devront respectivement trouver la plus petite distance 
entre les nombres stockés, puis la retourner. 
S’il n’y a aucun nombre stocké, ou juste un,
aucune distance ne peut être trouvée, jetez une exception.*/

//https://askcodez.com/trouver-la-distance-entre-les-deux-plus-proches-des-elements-dans-un-tableau-de-nombres.html//
unsigned int Span::shortestSpan(void) const
{
  std::vector<int> sorted = this->_numbers;
  std::sort(sorted.begin(), sorted.end());
  unsigned int ret; 
  unsigned int i;
  unsigned int tmp;
  
  if (this->_numbers.size() < 2)
		throw (std::runtime_error(std::string("No span to find")));
  ret = abs(sorted[1] - sorted[0]);
  i = 0;
  while (i < this->_n)
  {
   // std::cout << "value de sorted i = " << sorted[i] << " et value de abs du meme = " << abs(sorted[i]) << std::endl;
    tmp = abs(sorted[i + 1] - sorted[i]);
    if (tmp < ret)
        ret = tmp; 
    i++;
  } 
  return (ret);
}

//https://askcodez.com/comment-puis-je-obtenir-la-max-ou-min-la-valeur-dun-vecteur.html
unsigned int Span::longestSpan(void) const
{
    if (this->_numbers.size() < 2)
		throw (std::runtime_error(std::string("No span to find")));
        
    int max_e = *std::min_element(_numbers.begin(), _numbers.end());
    int mini_e = *std::max_element(_numbers.begin(), _numbers.end());

    return (abs(max_e - mini_e));
}

/* /////////////////////////////////// 
// Other method without using loops//
/////////////////////////////////////
int smallest_element, largest_element, value;
vector <int> v;
for(int i = 0;i<n;i++)
{
    if(i==0)
    {
        smallest_element= value; 
        largest_element= value;
    }

    if(value<smallest_element and i>0)
    {
        smallest_element = value;
    }

    if(value>largest_element and i>0)
    {
        largest_element = value;
    }
    v.push_back(value);
}*/

void Span::display(void)
 {
     std::vector<int>::iterator i;

     std::cout << "here is the display of the vector: \n";

     i = this->_numbers.begin();
     while (i != this->_numbers.end())
     {
         std::cout << *i << " " ;
         i++;
     }
     std::cout << std::endl;
}