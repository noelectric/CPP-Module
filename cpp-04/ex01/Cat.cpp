#include "Cat.hpp"

Cat::Cat(void) : Animal::Animal("Cat"){
    std::cout << "Cat Default constructor called" << std::endl;
    this->_brain = new Brain();
}

Cat::Cat(const Cat &dg):_brain(NULL){
    *this = dg;
    std::cout << "Cat copy constructor called\n";
}

Cat &Cat::operator=(const Cat &an){
    if (this != &an){
        Animal::operator=(an);
        if (_brain != NULL)
            delete _brain;
        _brain = new Brain(*(an.getBrain()));
    }
    return (*this);
}

Cat::~Cat(){
    delete _brain;
    std::cout << "Cat destructor called\n";
}

void Cat::makeSound() const{
    std::cout << "Cat sound\n";
}

const Brain *Cat::getBrain(void)const{
    return this->_brain;
}