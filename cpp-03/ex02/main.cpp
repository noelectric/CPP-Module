#include "FragTrap.hpp"

int main(){
    FragTrap noelectric("Noelectric");
    FragTrap toofattokidnap;
    toofattokidnap = FragTrap("TooFatToKidnapp");
    FragTrap zenon("Zenon");

    std::cout << "Fight 1 ::::" << std::endl;
    noelectric.attack("TooFatToKidnapp");
    noelectric.takeDamage(0);
    noelectric.beRepaired(0);
    noelectric.highFivesGuys();

    std::cout << std::endl;
    std::cout << "Fight 2 :::" << std::endl;
    toofattokidnap.attack("Noelectric");
    toofattokidnap.takeDamage(11);
    toofattokidnap.beRepaired(5);
    noelectric.highFivesGuys();

    std::cout << std::endl;
    std::cout << "Fight 3 :::" << std::endl;
    zenon.attack("Noelectric");
    zenon.takeDamage(4);
    zenon.beRepaired(5);
    noelectric.highFivesGuys();

    return 0;
}