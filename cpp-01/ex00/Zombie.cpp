#include "Zombie.hpp"

Zombie::Zombie(std::string const &name) : _name(name){}

void Zombie::announce(void){
    std::cout << "\033[1;31m" << _name
        << EOC << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie(void){
    std::cout << "Zombie " << "\033[21;31m" << _name 
        << EOC << " Has died" << std::endl;
}

