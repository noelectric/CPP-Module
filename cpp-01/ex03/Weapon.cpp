#include "Weapon.hpp"

const std::string& Weapon::getType(void) const{
    return (this->_type);
}

void Weapon::setType(std::string const &type){
    _type = type;
}

Weapon::Weapon(const char *type){
    if(!type){
        _type = "EMPTY";
        return ;
    }
    _type = type;
}

Weapon::~Weapon(void){};