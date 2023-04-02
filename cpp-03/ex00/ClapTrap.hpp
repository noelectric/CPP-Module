#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <iomanip>
#define Hit_Point 10
#define Energy_Point 10
#define Attack_Point 0

class ClapTrap
{
private:
    std::string _name;
    int hit_point;
    int energy_point;
    int attack_damage;
public:
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    ClapTrap &operator=(const ClapTrap &ct);
    ClapTrap(void);
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap &ct);
    ~ClapTrap(void);
};


#endif