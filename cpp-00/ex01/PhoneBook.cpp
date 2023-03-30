#include "./phonebook.hpp"

void PhoneBook::ft_header(void) const{
    std::cout << std::endl
    << std::setfill('=') << std::setw(42)
    << EOC << std::endl << "| Phone Book App"
    << std::setfill(' ') << std::setw(20)
    << "|" << std::endl << "| "
    << "by NoElectric.."
    << std::setfill(' ') << std::setw(19)
    << "|" << std::endl
    << std::setfill('=') << std::setw(42)
    << EOC << std::endl;
}

void PhoneBook::ft_command(void) const{
    std::cout << std::endl
    << "Chose one of this command : [ " 
    << "\033[21;31m" << "ADD" << EOC << " ] [ "
    << "\033[21;33m" << "SEARCH" << EOC << " ] [ "
    << "\033[21;34m" << "EXIT" << EOC << " ]\n";
}

void PhoneBook::ft_input(void){
    std::size_t size;
    const std::string whitespace = " \t\n\v\r\f";

    if(!(std::getline(std::cin >> std::ws, cmd)))
        exit (1);
    cmd.erase(cmd.find_last_not_of(whitespace) + 1);
    size = cmd.size();
    for (std::size_t i = 0; i < size; i++)
        cmd[i] = std::toupper(cmd[i]);
}

int PhoneBook::ft_type(void) const{
    if(cmd == cmd_add)
        return (1);
    if(cmd == cmd_search)
        return (2);
    if (cmd == cmd_exit)
        return (0);
    return (-1);
}

std::string PhoneBook::ft_output(void) const{
    return cmd;
}

void PhoneBook::ft_add(void){
    std::string tmp;

    if(check_full)
        std::cout << "\033[21;31m" 
        << "Contact will be OVERWRITTEN due Memory is insufficient"
        << EOC << std::endl;
    std::cout << "Contact index : [ " 
    << (check_full ? "\033[21;31m" : "\033[21;33m")<< c_index + 1
    << EOC << " / " << PB_SIZE << " ] \n";
    c[c_index].set_field(0, &tmp, "1. First name : ");
    c[c_index].set_field(1, &tmp, "2. Lats name  : ");
    c[c_index].set_field(2, &tmp, "3. Alias      : ");
    c[c_index].set_field(3, &tmp, "4. Phone      : ");
    c[c_index].set_field(4, &tmp, "5. Secret     : ");
    if ( !check_full && c_index == PB_SIZE - 1)
        check_full = true;
    c_index += 1;
}

void PhoneBook::_detail(void) const{
    int opt;

    while (true){
        std::cout << "Select the Contact index to search : \t";
        std::cin >> opt;
        if (std::cin.fail() || opt > PB_SIZE){
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Wrong Output !!" << "\033[1;31m" << EOC << std::endl;
            continue;
        }
        break;
    }
    if (!opt)
        return ;
    std::cout << std::endl
    << "\033[1;32m" << "1. First name : " << EOC
    << c[c_index - 1].get_f_name() << std::endl
    << "\033[1;32m" << "2. Last name : " << EOC
    << c[c_index - 1].get_l_name() << std::endl
    << "\033[1;32m" << "3. Alias      : " << EOC
    << c[c_index - 1].get_alias() << std::endl
    << "\033[1;32m" << "4. Phone      : " << EOC
    << c[c_index - 1].get_phone() << std::endl
    << "\033[1;32m" << "5. Secret     : " << EOC
    << c[c_index - 1].get_secret() << std::endl;
}

std::string PhoneBook::_min(std::string str) const{
    if (str.size() > 10){
        str[10 - 1] = '.';
        str.erase(10); 
    }
    return str; 
}

void PhoneBook::ft_search(void) const{
    int size = check_full ? PB_SIZE : c_index;

    if (!size){
        std::cout << "\033[1;31m" << "Empty Phone Book" << EOC << std::endl;
        return ;
    }
    std::cout << std::setfill('=') << std::setw(51) << "\033[0;0m" << std::endl<< "|" 
    << std::setfill(' ') << std::setw(10) 
    << "index" << "|"
    << std::setfill(' ') << std::setw(10) 
    << "First name" << "|"
    << std::setfill(' ') << std::setw(10) 
    << "Last name" << "|"
    << std::setfill(' ') << std::setw(10) 
    << "nickname" << "|" << std::endl
    << std::setfill('=') << std::setw(51) << "\033[0;0m" << std::endl;

    for (int i = 0; i < size; i++)
    {
      std::cout << "|" << "\033[1;33m" << std::setfill(' ') << std::setw(10)
      << i + 1 << "\033[0;0m" << "|"
      << std::setfill(' ') << std::setw(10)
      << _min(c[i].get_f_name()) << "|"
      << std::setfill(' ') << std::setw(10)
      << _min(c[i].get_l_name()) << "|" 
      << std::setfill(' ') << std::setw(10)
      << _min(c[i].get_alias()) << "|" << std::endl
      << std::setfill('=') << std::setw(51) << "\033[0;0m" << std::endl;
    }
    _detail();
}

PhoneBook::PhoneBook(void):
    cmd_add("ADD"), cmd_search("SEARCH"), cmd_exit("EXIT"){
        std::cout << "\033[1;33m" << "Opening Phone Book..." << EOC << std::endl;
        std::cout << "\033[1;32m" << "Phone Book has been opened" << EOC << std::endl;
        ft_header();
}

PhoneBook::~PhoneBook(void){
    std::cout << "\033[1;33m" << "Closing Phone Book..." << EOC << std::endl;
    std::cout << "\033[1;32m" << "Phone Book has been closed" << EOC << std::endl;
}
