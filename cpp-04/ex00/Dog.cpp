#include "Dog.hpp"

Dog::Dog(void) : Animal::Animal("Dog"){
    std::cout << "Dog Default constructor called" << std::endl;
}

Dog::Dog(const Dog &dg){
    std::cout << "Dog copy constructor called\n";
}

Dog &Dog::operator=(const Dog &an){
    Animal::operator=(an);
    return (*this);
}

Dog::~Dog(){
    std::cout << "Dog destructor called\n";
}

void Dog::makeSound() const{
    std::cout << "Dog sound\n";
}