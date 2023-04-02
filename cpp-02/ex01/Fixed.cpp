#include "Fixed.hpp"

std::ostream &operator<<(std::ostream &os, const Fixed&f){
    return os << f.toFloat();
}

float Fixed::toFloat(void) const{
    return (float(_fixed_point) / (1 << Fixed::fract_bits));
}

int Fixed::toInt(void) const{
    return (_fixed_point >> Fixed::fract_bits);
}

Fixed::Fixed(const int num):_fixed_point(num << Fixed::fract_bits){
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float num):_fixed_point(roundf(num * (1 << Fixed::fract_bits))){
    std::cout << "Float constructor called" << std::endl;
}

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