#include "Dog.hpp"
#include "Animal.hpp"
#include "Cat.hpp"

int main()
{
    Dog ali;
    {
        Dog l(ali);
    }
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;
    delete i;
    return 0;
}