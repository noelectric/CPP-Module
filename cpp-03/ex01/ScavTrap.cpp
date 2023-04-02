#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void): ClapTrap::ClapTrap(100, 50, 20){
    std::cout << "Default ScavTrap constructor called\n";
}

ScavTrap::ScavTrap(std::string name): ClapTrap::ClapTrap(name, 100, 50,20){
    std::cout << "Default ScavTrap constructor called [" << name << "]\n";
}

ScavTrap::ScavTrap(const ScavTrap &st): ClapTrap::ClapTrap() {
    std::cout << "Copy ScavTrap constructor called" << std::endl;
    *this = st;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &st){
    ClapTrap::operator=(st);
    return *this;
}

ScavTrap::~ScavTrap(void){
    std::cout << "ScavTrap " << this->_name << "is deid" << std::endl;
}

void ScavTrap::attack(const std::string& target){
     if (hit_point > 0 && energy_point > 0)
    {
        std::cout << "ScavTrap [" << this->_name << "] attacks [" << target
        << "], causing [" << this->attack_damage << "] points of damage!" << std::endl;
        energy_point -= 1;
    }
}

void ScavTrap::guardGate(){
    std::cout << "ScavTrap is now in Gate keeper mode." << std::endl << std::endl;
}