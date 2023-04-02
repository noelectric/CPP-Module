#include "Fixed.hpp"

std::ostream &operator<<(std::ostream &os, const Fixed&f){
    return os << f.toFloat();
}

bool Fixed::operator>(const Fixed &f) const{
    return (_fixed_point > f.getRawBits());
}
bool Fixed::operator<(const Fixed &f) const{
    return (_fixed_point < f.getRawBits());
}

bool Fixed::operator>=(const Fixed &f) const{
    return (_fixed_point > f.getRawBits());
}

bool Fixed::operator<=(const Fixed &f) const{
    return (_fixed_point < f.getRawBits());
}

bool Fixed::operator==(const Fixed &f) const{
    return (_fixed_point == f.getRawBits());
}

bool Fixed::operator!=(const Fixed &f) const{
    return (_fixed_point == f.getRawBits());
}

Fixed Fixed::operator+(const Fixed& f) const{
    Fixed tmp(this->toFloat() + f.toFloat());
    return tmp;
}

Fixed Fixed::operator-(const Fixed& f) const{
    Fixed tmp(this->toFloat() - f.toFloat());
    return tmp;
}

Fixed Fixed::operator*(const Fixed& f) const{
    Fixed tmp(this->toFloat() * f.toFloat());
    return tmp;
}

Fixed Fixed::operator/(const Fixed& f) const{
    if (f.toFloat() == 0)
        return (Fixed(*this));
    Fixed tmp(this->toFloat() / f.toFloat());
    return tmp;
}

Fixed &Fixed::operator++(){
    this->_fixed_point++;
    return *this;
}

Fixed Fixed::operator++(int){
    Fixed tmp (*this);
    this->_fixed_point++;
    return tmp;
}

Fixed &Fixed::operator--(){
    this->_fixed_point--;
    return *this;
}

Fixed Fixed::operator--(int){
    Fixed tmp (*this);
    this->_fixed_point--;
    return tmp;
}

Fixed &Fixed::min(Fixed &left, Fixed &right){
    return (left._fixed_point > right._fixed_point ? left : right);
}


Fixed &Fixed::max(Fixed &left, Fixed &right){
    return (left._fixed_point < right._fixed_point ? left : right);
}

const Fixed &Fixed::min(Fixed const &left, Fixed const &right){
    return (left._fixed_point > right._fixed_point ? left : right);
}

const Fixed &Fixed::max(Fixed const &left, Fixed const &right){
    return (left._fixed_point < right._fixed_point ? left : right);
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