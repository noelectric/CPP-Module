#include "Contact.hpp"

std::string Contact::get_f_name(void) const{
        return _f_name;
}

std::string Contact::get_l_name(void) const{
    return _l_name;
}

std::string Contact::get_alias(void) const{
    return _alias;
}

std::string Contact::get_phone(void) const{
    return _phone;
}

std::string Contact::get_secret(void) const{
    return _secret;
}

void Contact::set_field(int i, std::string *in, std::string const &term)
{
    const std::string whitespace = " \t\n\v\r\f";

    in->clear();
    std::cout << term;
    if(!(std::getline(std::cin >> std::ws, *in)))
        exit(1);
    in->erase(in->find_last_not_of(whitespace) + 1);
    switch (i){
        case 0:
            _f_name = *in;
            break;
        case 1:
            _l_name = *in;
            break;
        case 2:
            _alias = *in;
            break;
        case 3:
            _phone = *in;
            break;
        case 4:
            _secret = *in;
            break;
    }
}
Contact::Contact(void){}
Contact::~Contact(void){}