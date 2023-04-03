#include "Cat.hpp"

Cat::Cat(void) : Animal::Animal("Cat"){
    std::cout << "Cat Default constructor called" << std::endl;
}

Cat::Cat(const Cat &dg){
    std::cout << "Cat copy constructor called\n";
}

Cat &Cat::operator=(const Cat &an){
    Animal::operator=(an);
    return (*this);
}

Cat::~Cat(){
    std::cout << "Cat destructor called\n";
}

void Cat::makeSound() const{
    std::cout << "Cat sound\n";
}