#include "Harl.hpp"



void Harl::complain(std::string level){
    const std::string str[] = {
        "debug",
        "info",
        "warning",
        "error"
    };
    void (Harl::*tab[4]) (void) = {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };
    size_t i;
    for (i = 0; i < 4; i++)
    {
        if (level == str[i]){
            (this->*tab[i])();
            break;
        }
    }
}

void Harl::debug(void){
    std::cout << "debug function ha's been called" << std::endl;
}

void Harl::info(void){
    std::cout << "info function ha's been called" << std::endl;
}

void Harl::warning(void){
    std::cout << "warning function ha's been called" << std::endl;
}

void Harl::error(void){
    std::cout << "error function ha's been called" << std::endl;
}
Harl::Harl(void){}
Harl::~Harl(void){}