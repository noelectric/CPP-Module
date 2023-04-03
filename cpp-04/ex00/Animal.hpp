#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <iomanip>

class Animal{
    protected :
        std::string _type;
    public :
        Animal(void);
        Animal(const std::string type);
        Animal(const Animal &an);
        Animal &operator=(const Animal &an);
        std::string getType(void) const;
        virtual void makeSound(void) const;
        virtual ~Animal(void);
};

#endif