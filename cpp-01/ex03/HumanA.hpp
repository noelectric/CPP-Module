#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA{
    private :
        std::string _name;
        Weapon const &_w;
    public :
        void attack(void);
    HumanA(const char *name, Weapon const &w);
    ~HumanA(void);
};

#endif