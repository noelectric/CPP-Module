#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
    void attack(const std::string &name);
    void highFivesGuys(void);

    FragTrap(void);
    FragTrap(std::string name);
    FragTrap(const FragTrap &ft);
    FragTrap &operator=(const FragTrap &ft);
    ~FragTrap();
};


#endif