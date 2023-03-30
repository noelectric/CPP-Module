#include "Zombie.hpp"

int main(void){
    Zombie ali("ToofatTokidnap");
    Zombie *Zenon0777;

    ali.announce();
    Zenon0777 = newZombie("Zenon0777");
    if (!Zenon0777)
        return ( std::cout << "Allocation error\n", 1);
    Zenon0777->announce();
    randomChump("Noelectric");
    delete Zenon0777;
    return 0;
}