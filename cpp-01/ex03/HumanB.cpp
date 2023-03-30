#include "HumanB.hpp"

void HumanB::attack(void){
    if (this->_w)
        std::cout << this->_name << " attacks with their " 
            << this->_w->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &w){
    this->_w = &w;
}

HumanB::HumanB(const char *name):_w(NULL){
    if (!name){
        name = "EMPTY";
        return ;
    }
    this->_name = name;
}

HumanB::~HumanB(void){};