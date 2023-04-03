#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void): _type("Wrong Animal"){
    std::cout << "WrongAnimal Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string type): _type(type){
    std::cout << "WrongAnimal Default constructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &an){
    std::cout << "WrongAnimal Assignement operator called" << std::endl;
    if (this != &an)
        this->_type = an._type;
    return (*this);
}

WrongAnimal::WrongAnimal(const WrongAnimal &an){
    std::cout << "WrongAnimal Copy constructor called" << std::endl;
    *this = an;
}

WrongAnimal::~WrongAnimal(void){
    std::cout << "WrongAnimal Default destructor called" << std::endl;
}

std::string WrongAnimal::getType(void) const{
    return (_type);
}

void WrongAnimal::makeSound(void) const{
    std::cout << "WrongAnimal Animal Sound\n";
}