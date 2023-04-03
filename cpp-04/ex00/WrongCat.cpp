#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal::WrongAnimal("WrongCat"){
    std::cout << "WrongCat Default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &dg){
    std::cout << "WrongCat copy constructor called\n";
}

WrongCat &WrongCat::operator=(const WrongCat &an){
    WrongAnimal::operator=(an);
    return (*this);
}

WrongCat::~WrongCat(){
    std::cout << "WrongCat destructor called\n";
}

void WrongCat::makeSound() const{
    std::cout << "WrongCat sound\n";
}