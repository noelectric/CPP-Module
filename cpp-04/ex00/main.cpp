#include "Dog.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"

int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound();
j->makeSound();
meta->makeSound();
delete meta;
delete j;
delete i;

std::cout << std::endl << std::endl;
WrongAnimal *ali = new WrongAnimal();
WrongAnimal *dog = new WrongCat();
std::cout << ali->getType() << " " << std::endl;
std::cout << dog->getType() << " " << std::endl;
ali->makeSound();
dog->makeSound();
delete ali;
delete dog;
return 0;
}