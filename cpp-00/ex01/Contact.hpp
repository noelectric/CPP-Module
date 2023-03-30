#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <stdlib.h>

class Contact{
    private :
        std::string _f_name;
        std::string _l_name;
        std::string _alias;
        std::string _phone;
        std::string _secret;
    
    public :
        std::string get_f_name(void) const;
        std::string get_l_name(void) const;
        std::string get_alias(void) const;
        std::string get_phone(void) const;
        std::string get_secret(void) const;
    void set_field(int i, std::string *in, std::string const &term);
    Contact(void);
    ~Contact();
};

#endif