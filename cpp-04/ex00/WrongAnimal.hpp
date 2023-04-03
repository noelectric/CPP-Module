#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP

#include <iostream>
#include <iomanip>

class WrongAnimal{
    protected :
        std::string _type;
    public :
        WrongAnimal(void);
        WrongAnimal(const std::string type);
        WrongAnimal(const WrongAnimal &an);
        WrongAnimal &operator=(const WrongAnimal &an);
        std::string getType(void) const;
        void makeSound(void) const;
        ~WrongAnimal(void);
};

#endif