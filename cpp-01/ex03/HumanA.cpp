#include "HumanA.hpp"

void HumanA::attack(void){
    std::cout << this->_name << " attacks with their " 
        << this->_w.getType() << std::endl;
}

HumanA::HumanA(const char *name, Weapon const &w):_w(w){
    if (!name){
        name = "EMPTY";
        return ;
    }
    this->_name = name;
}

HumanA::~HumanA(void){};