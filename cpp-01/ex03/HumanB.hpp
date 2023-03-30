#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB{
    private :
        std::string _name;
        Weapon *_w;
    public :
        void attack(void);
        void setWeapon(Weapon &w);
    HumanB(const char *name);
    ~HumanB(void);
};

#endif