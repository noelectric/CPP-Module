#include "ClapTrap.hpp"

int main(){
    ClapTrap noelectric("Noelectric");
    ClapTrap toofattokidnap;
    toofattokidnap = ClapTrap("TooFatToKidnapp");
    ClapTrap zenon(noelectric);

    std::cout << "Fight 1 ::::" << std::endl;
    noelectric.attack("TooFatToKidnapp");
    noelectric.takeDamage(0);
    noelectric.beRepaired(9);

    std::cout << std::endl;
    std::cout << "Fight 2 :::" << std::endl;
    toofattokidnap.attack("Noelectric");
    toofattokidnap.takeDamage(11);
    toofattokidnap.beRepaired(5);

    std::cout << std::endl;
    std::cout << "Fight 3 :::" << std::endl;
    zenon.attack("Noelectric");
    zenon.takeDamage(4);
    zenon.beRepaired(5);

    return 0;
}