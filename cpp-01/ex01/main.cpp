#include "Zombie.hpp"

int main(void){

    Zombie *Zenon0777;

    Zenon0777 = zombieHorde(10, "zombie");
    if (!Zenon0777)
        return ( std::cout << "Allocation error\n", 1);
    for(size_t i = 0; i < 10; i++)
        Zenon0777[i].~Zombie();
    ::operator delete(Zenon0777);
    return 0;
}