#include "./phonebook.hpp"

int main(void){
    PhoneBook _phonebook;

    while (true)
    {
        _phonebook.ft_command();
        _phonebook.ft_input();
        switch (_phonebook.ft_type())
        {
        case 1:
            _phonebook.ft_add();
            break;
        case 2:
            _phonebook.ft_search();
            break;
        case 3 :
            return 0;
        default:
            std::cout << "\033[21;31m" << "Wrong input" << EOC << std::endl;
            break;
        }
    }
    return 0;
}
