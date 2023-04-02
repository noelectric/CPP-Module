#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
    void attack(const std::string& target);
    void guardGate();
    ScavTrap(void);
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap &st);
    ScavTrap &operator=(const ScavTrap &st);
    ~ScavTrap(void);
};

#endif