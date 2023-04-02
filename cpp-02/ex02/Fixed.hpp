#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <iomanip>
#include <cmath>
class Fixed{
    private :
        int _fixed_point;
        static const int fract_bits = 8;
    public :
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        Fixed &operator = (const Fixed &f);
        float toFloat( void ) const;
        int toInt( void ) const;
        bool operator>(const Fixed &f) const;
        bool operator<(const Fixed &f) const;
        bool operator>=(const Fixed &f) const;
        bool operator<=(const Fixed &f) const;
        bool operator==(const Fixed &f) const;
        bool operator!=(const Fixed &f) const;

        Fixed operator+(const Fixed& f) const;
        Fixed operator-(const Fixed& f) const;
        Fixed operator*(const Fixed& f) const;
        Fixed operator/(const Fixed& f) const;
        Fixed &operator++(void);
        Fixed operator++(int);
        Fixed &operator--(void);
        Fixed operator--(int);
    static Fixed &min(Fixed &left, Fixed &right);
    static Fixed &max(Fixed &left, Fixed &right);
    static const Fixed &min(Fixed const &left, Fixed const &right);
    static const Fixed &max(Fixed const &left, Fixed const &right);
    Fixed(void);
    Fixed(const Fixed &f);
    Fixed(const int num);
    Fixed(const float num);
    ~Fixed(void);

};

std::ostream &operator<<(std::ostream &os, const Fixed&f);

#endif