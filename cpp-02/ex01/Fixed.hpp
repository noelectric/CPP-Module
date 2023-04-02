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
    Fixed(void);
    Fixed(const Fixed &f);
    Fixed(const int num);
    Fixed(const float num);
    ~Fixed(void);

};

std::ostream &operator<<(std::ostream &os, const Fixed&f);

#endif