#include "Animal.hpp"

Animal::Animal(void): _type("Animal"){
    std::cout << "Animal Default constructor called" << std::endl;
}

Animal::Animal(const std::string type): _type(type){
    std::cout << "Animal Default constructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &an){
    std::cout << "Animal Assignement operator called" << std::endl;
    if (this != &an)
        this->_type = an._type;
    return (*this);
}

Animal::Animal(const Animal &an){
    std::cout << "Animal Copy constructor called" << std::endl;
    *this = an;
}

Animal::~Animal(void){
    std::cout << "Animal Default destructor called" << std::endl;
}

std::string Animal::getType(void) const{
    return (_type);
}

void Animal::makeSound(void) const{
    std::cout << "Animal Sound\n";
}