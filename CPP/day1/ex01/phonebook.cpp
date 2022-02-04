#include "Phonebook.hpp"

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
        while (i < 11)
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
    std::cout << "|";
    ft_putstr(get_first_name());
    std::cout << "|";
    ft_putstr(get_nickname());
    std::cout << "|";
    ft_putstr(get_phone());
    std::cout << "|";
   ft_putstr(get_secret());
    std::cout << "|\n";

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
            set_first_name(buff);

        }
        else if(j == 1)
        {
            std::cout << "Please write down the nickname" << std::endl;
            std::cin >> buff;
            set_nickname(buff);
        }
        else if (j == 2)
        {
            std::cout << "Please write down the phone number" << std::endl;
            std::cin >> buff;
            set_phone(buff);
        }
        else if (j == 3)
        {
            std::cout << "Please write down your darkest secret " << std::endl;
            std::cin >> buff;
            set_secret(buff);
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
    if (j < 0 || j > 8)
    {
        std::cout << "Bad information\n";
        return (-1);
    }
    else
    {
        return (j);
    }
}

int main(int ac, char **av)
{
    Phonebook repertoire[8];
    std::string buff;
    int cursor;

    (void)av;
    cursor = 0;
    if (ac == 1)
    {
        while (1)
        {
            std::cout << "Waiting for command" << std::endl;
             std::cin >> buff;
            if (buff == "ADD")
            {
                std::cout << "\nYou have selected ADD .. \n" << std::endl;
                if (cursor == 8)
                    cursor = 0;
                repertoire[cursor].new_contact(cursor);
                cursor++;
            }
            else if (buff == "SEARCH")
            {
                std::cout << "\nYou have selected SEARCH .. \n" << std::endl;
                 std::cin >> buff;
                 if(repertoire->look_for_contact(buff) > -1)
                    repertoire[repertoire->look_for_contact(buff)].display(0);

                repertoire[cursor].look_for_contact(buff);
                ;
            }
            else if (buff == "EXIT")
                break ;
            else
                std::cout << "Wrong command if you wanna exit please press [CTRL] + [C] or EXIT" << std::endl;
        }
    }
    return (0);
}
