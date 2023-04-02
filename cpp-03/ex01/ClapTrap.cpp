#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void){
    std::cout << "Default ClapTrap constructor called\n";
}

ClapTrap::ClapTrap(std::string name): _name(name), hit_point(Hit_Point),
     energy_point(Energy_Point), attack_damage(Attack_Point){
        std::cout << "Default ClapTrap constructor called [" << _name << "]"
            << std::endl;
    }

ClapTrap::ClapTrap(int hit, int energy, int damage):hit_point(hit), 
    energy_point(energy), attack_damage(damage){
        std::cout << "Default ClapTrap constructor called\n";
    }

ClapTrap::ClapTrap(std::string name, int hit, int energy, int damage)
: _name(name), hit_point(hit),
     energy_point(energy), attack_damage(damage){
        std::cout << "Default ClapTrap constructor called [" << _name << "]"
            << std::endl;
    }

ClapTrap &ClapTrap::operator=(const ClapTrap &ct){
    std::cout << "Assignement ClapTrap operator called" << std::endl;
    if (this != &ct)
    {
        this->_name = ct._name;
        this->hit_point = ct.hit_point;
        this->energy_point = ct.energy_point;
        this->attack_damage = ct.attack_damage;
    }
    return (*this);
}

ClapTrap::ClapTrap(const ClapTrap &ct){
    std::cout << "Copy ClapTrap constructor called" << std::endl;
    *this = ct;
}

void ClapTrap::attack(const std::string& target){
    if (hit_point > 0 && energy_point > 0)
    {
        std::cout << "ClapTrap [" << this->_name << "] attacks [" << target
        << "], causing [" << this->attack_damage << "] points of damage!" << std::endl;
        energy_point -= 1;
    }
}

void ClapTrap::takeDamage(unsigned int amount){
    std::cout << "ClapTrap [" << this->_name << "] Hits point is [" 
    << hit_point << "]" << std::endl;
    if (hit_point > 0)
    {
        hit_point -= amount;
        if (hit_point < 0)
            hit_point = 0;
        std::cout << "ClapTrap [" << this->_name << "] take Damages [" << amount << "]" << std::endl;
		std::cout << "ClapTrap [" << this->_name << "] new Hitpoints is [" << hit_point << "]" << std::endl;
        if (hit_point == 0)
            std::cout << "ClapTrap [" << this->_name << "] is destroyed" << std::endl;  
    }
    else
        std::cout << "ClapTrap [" << this->_name << "] already destroyed" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
    if (!hit_point)
        std::cout << "ClapTrap [" << this->_name << "] already destroyed" << std::endl;
    if (!energy_point)
        std::cout << "ClapTrap [" << this->_name << "] no energy point" << std::endl;
    else{
        hit_point += amount;
        energy_point -= 1;
        std::cout << "ClapTrap [" << this->_name << "] is repaired [" << amount << "]" << std::endl;
		std::cout << "ClapTrap [" << this->_name << "] Hitpoints is [" << hit_point << "]" << std::endl;
    }
}

ClapTrap::~ClapTrap(void){
    std::cout << "ClapTrap " << this->_name << "is deid" << std::endl;
}