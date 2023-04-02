#include "Fixed.hpp"

Fixed::Fixed(void): _fixed_point(0){
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &f){
    std::cout << "Copy constructor called" << std::endl;
    *this = f;
}

Fixed::~Fixed(void){
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_fixed_point);
}

void Fixed::setRawBits(int const raw){
    std::cout << "getRawBits member function called" << std::endl;
    this->_fixed_point = raw;
}

Fixed &Fixed::operator=(const Fixed &f){
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &f)
        this->_fixed_point = f.getRawBits();
    return (*this);
}