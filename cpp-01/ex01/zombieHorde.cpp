#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ){
    Zombie *n_zombie;

    if (N <= 0)
        return NULL;
    n_zombie = (Zombie *)::operator new (sizeof(Zombie)*N);
    if (!n_zombie)
        return NULL;
    std::stringstream ss;
    for (int i = 0; i < N; i++){
        ss << i + 1;
        new ((void *)&n_zombie[i]) Zombie(name + ss.str());
        n_zombie[i].announce();
        ss.str("");
    }
    return(n_zombie);
}