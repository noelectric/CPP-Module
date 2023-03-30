#ifndef WEAPON_HPP
#define WEAPON_HPP

#define EOC "\033[0;0m"
#include <limits>
#include <iomanip>
#include <iostream>
#include <string>

class Weapon{
    private :
        std::string _type;
    public :
        const std::string &getType(void) const;
        void setType(std::string const &type);

    Weapon(const char *type);
    ~Weapon(void);
};

#endif