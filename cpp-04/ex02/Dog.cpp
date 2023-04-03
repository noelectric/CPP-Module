#include "Dog.hpp"

Dog::Dog(void) : Animal::Animal("Dog"){
    std::cout << "Dog Default constructor called" << std::endl;
    this->_brain = new Brain();
}

Dog::Dog(const Dog &dg):_brain(NULL){
    *this = dg;
    std::cout << "Dog copy constructor called\n";
}

Dog &Dog::operator=(const Dog &an){
    if (this != &an){
        Animal::operator=(an);
        if (_brain != NULL)
            delete _brain;
        _brain = new Brain(*(an.getBrain()));
    }
    return (*this);
}

Dog::~Dog(){
    delete _brain;
    std::cout << "Dog destructor called\n";
}

void Dog::makeSound() const{
    std::cout << "Dog sound\n";
}

const Brain *Dog::getBrain(void)const{
    return this->_brain;
}