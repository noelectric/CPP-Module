#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#define EOC "\033[0;0m"
#include <limits>
#include <iomanip>
#include <iostream>
#include <string>

class Zombie{
    private :
        std::string _name;
    public :
        void announce( void );
    
    Zombie(std::string const &name);
    ~Zombie();
};
    void randomChump( std::string name );
    Zombie* newZombie( std::string name );

#endif