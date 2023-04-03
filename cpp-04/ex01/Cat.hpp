#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private :
        Brain *_brain;
    public:
        Cat(void);
        Cat(const Cat &dg);
        Cat &operator=(const Cat &dg);
        void makeSound(void) const;
        const Brain *getBrain(void)const ;
        ~Cat(void);
};


#endif