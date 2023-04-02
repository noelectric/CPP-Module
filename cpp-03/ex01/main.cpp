#include "ScavTrap.hpp"

int main(){
    ScavTrap noelectric("Noelectric");
    ScavTrap toofattokidnap;
    toofattokidnap = ScavTrap("TooFatToKidnapp");
    ScavTrap zenon(noelectric);

    std::cout << "Fight 1 ::::" << std::endl;
    noelectric.attack("TooFatToKidnapp");
    noelectric.takeDamage(0);
    noelectric.beRepaired(0);
    noelectric.guardGate();

    std::cout << std::endl;
    std::cout << "Fight 2 :::" << std::endl;
    toofattokidnap.attack("Noelectric");
    toofattokidnap.takeDamage(11);
    toofattokidnap.beRepaired(5);
    noelectric.guardGate();

    std::cout << std::endl;
    std::cout << "Fight 3 :::" << std::endl;
    zenon.attack("Noelectric");
    zenon.takeDamage(4);
    zenon.beRepaired(5);
    noelectric.guardGate();

    return 0;
}