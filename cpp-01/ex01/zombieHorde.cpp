#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ){
    Zombie *n_zombie;

    if (N <= 0)
        return NULL;
    n_zombie = (Zombie *)::operator new (sizeof(Zombie)*N);
    if (!n_zombie)
        return NULL;
    for (int i = 0; i < N; i++){
        new ((void *)&n_zombie[i]) Zombie(name + std::to_string(i + 1));
        n_zombie[i].announce();
    }
    return(n_zombie);
}