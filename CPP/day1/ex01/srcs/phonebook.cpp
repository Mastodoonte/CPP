#include "../include/Phonebook.hpp"

Phonebook::Phonebook(void)
{
    std::cout << "Construction called" << std::endl;    
}

Phonebook::~Phonebook(void)
{
    std::cout << "Destructor called" << std::endl;
    return ;
}

void    Phonebook::init_contact(int nbr_contact)
{
    this->_nb_contact= nbr_contact;
}

int     ft_strlen(std::string str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

void    ft_putstr(std::string str)
{
    int i;
    int on_right;

    i = 0;
    on_right = 0;
    if (ft_strlen(str) >= 0 && ft_strlen(str) <= 10)
    {
        on_right = 10 - ft_strlen(str);
        while(on_right > 0)
        {
            std::cout << ' ';
            on_right--;
        }
        i = 0;
        while (i < ft_strlen(str))
        {
            std::cout << str[i];
            i++;
        }
    }
    else if (ft_strlen(str) > 9)
    {
        i = 0;
        while (i < 9)
        {
            std::cout << str[i];
            i++;
        }
        std::cout << '.';
    }

}

void    Phonebook::display(int i)
{
    (void)i;
    std::cout << MAGENTA;
    std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
    std::cout << "|";
    std::cout << NC;
    ft_putstr(this->_contact[i].get_first_name());
    std::cout << MAGENTA;
    std::cout << "|";
    std::cout << NC;
    ft_putstr(this->_contact[i].get_nickname());
    std::cout << MAGENTA;
    std::cout << "|";
    std::cout << NC;
    ft_putstr(this->_contact[i].get_phone());
     std::cout << MAGENTA;
    std::cout << "|";
    std::cout << NC;
   ft_putstr(this->_contact[i].get_secret());
    std::cout << MAGENTA;
    std::cout << "|\n";
    std::cout << NC;

}

void    Phonebook::display_all(int i)
{
    (void)i;
    std::cout << MAGENTA;
    std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
    std::cout << NC;
    i = 0;
    while(i < 8)
    {
        std::cout << MAGENTA;
        std::cout << "|";
        std::cout << NC;
        ft_putstr(this->_contact[i].get_first_name());
        std::cout << MAGENTA;
        std::cout << "|";
        std::cout << NC;
        ft_putstr(this->_contact[i].get_nickname());
        std::cout << MAGENTA;
        std::cout << "|";
        std::cout << NC;
        ft_putstr(this->_contact[i].get_phone());
        std::cout << MAGENTA;
        std::cout << "|";
        std::cout << NC;
        ft_putstr(this->_contact[i].get_secret());
        std::cout << MAGENTA;
        std::cout << "|\n";
        std::cout << NC;
        i++;
    }

}
void    Phonebook::new_contact(int i)
{
    int j;
    std::string buff;

    j = 0;
    (void)i;
    while (j < 5)
    {
        if (j == 0)
        {
            std::cout << "Please write down the first name" << std::endl;
            std::cin >> buff;
            this->_contact[i].set_first_name(buff);

        }
        else if(j == 1)
        {
            std::cout << "Please write down the nickname" << std::endl;
            std::cin >> buff;
            this->_contact[i].set_nickname(buff);
        }
        else if (j == 2)
        {
            std::cout << "Please write down the phone number" << std::endl;
            std::cin >> buff;
            this->_contact[i].set_phone(buff);
        }
        else if (j == 3)
        {
            std::cout << "Please write down your darkest secret " << std::endl;
            std::cin >> buff;
            this->_contact[i].set_secret(buff);
        }
        j++;
    }
}

int    Phonebook::look_for_contact(std::string i)
{
    int j;
    
    j = 0;
    while (i[j] == ' ')
        j++;
    j = i[0] - 48;
    if (j < 0 || j > 7)
    {
        std::cout << "Bad information\n";
        return (-1);
    }
    else
    {
        return (j);
    }
}