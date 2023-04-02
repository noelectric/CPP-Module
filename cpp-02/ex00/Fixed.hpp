#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <iomanip>

class Fixed{
    private :
        int _fixed_point;
        static const int fract_bits = 8;
    public :
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        Fixed &operator = (const Fixed &f);
    Fixed(void);
    Fixed(const Fixed &f);
    ~Fixed(void);
};

#endif