#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private :
        Brain *_brain;
    public:
        Dog(void);
        Dog(const Dog &dg);
        Dog &operator=(const Dog &dg);
        void makeSound(void) const;
        const Brain *getBrain(void)const ;
        ~Dog(void);
};


#endif

