#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <limits>
#include <iomanip>
#include <iostream>
#include <string>

#define EOC "\033[0;0m"
#include "Contact.hpp"
#define PB_SIZE 8

class PhoneBook {
    private :
        const std::string cmd_add; 
        const std::string cmd_search; 
        const std::string cmd_exit; 
        std::string cmd;
        void ft_header(void) const;
        bool check_full;
        int  c_index;
        Contact c[PB_SIZE];
        void _detail(void) const;
        std::string _min(std::string str) const;
    public :
        void ft_command(void) const;
        void ft_input(void);
        int  ft_type(void) const;
        std::string ft_output(void) const;
        void ft_add(void);
        void ft_search(void) const;
        PhoneBook(void);
        ~PhoneBook(void);
};

#endif