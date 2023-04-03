#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
    public:
        Cat(void);
        Cat(const Cat &dg);
        Cat &operator=(const Cat &dg);
        void makeSound(void) const;
        ~Cat(void);
};


#endif