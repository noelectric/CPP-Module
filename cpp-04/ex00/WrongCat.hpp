#ifndef WRONG_WrongCat_HPP
#define WRONG_WrongCat_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
        WrongCat(void);
        WrongCat(const WrongCat &dg);
        WrongCat &operator=(const WrongCat &dg);
        void makeSound(void) const;
        ~WrongCat(void);
};


#endif