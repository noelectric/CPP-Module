#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap::ClapTrap(100, 100, 30){
    std::cout << "Default FragTrap constructor called\n";
}

FragTrap::FragTrap(std::string name): ClapTrap::ClapTrap(name, 100, 50,20){
    std::cout << "Default FragTrap constructor called [" << name << "]\n";
}

FragTrap::FragTrap(const FragTrap &st): ClapTrap::ClapTrap() {
    std::cout << "Copy FragTrap constructor called" << std::endl;
    *this = st;
}

FragTrap &FragTrap::operator=(const FragTrap &st){
    ClapTrap::operator=(st);
    return *this;
}

FragTrap::~FragTrap(void){
    std::cout << "FragTrap " << this->_name << "is deid" << std::endl;
}

void FragTrap::attack(const std::string& target){
     if (hit_point > 0 && energy_point > 0)
    {
        std::cout << "FragTrap [" << this->_name << "] attacks [" << target
        << "], causing [" << this->attack_damage << "] points of damage!" << std::endl;
        energy_point -= 1;
    }
}

void FragTrap::highFivesGuys(void){
    std::cout << "FragTrap give me a high five" << std::endl;
}