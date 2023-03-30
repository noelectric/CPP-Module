#include <limits>
#include <iomanip>
#include <iostream>
#include <string>

#define EOC "\033[0;0m"
#define PADD_SIZE

int main ()
{
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

    for (size_t i = 0; i < 3; i++)
    {
      std::cout << "|" << "\033[1;33m" << std::setfill(' ') << std::setw(10)
      << i << "\033[0;0m" << "|"
      << std::setfill(' ') << std::setw(10)
      << "Younes" << "|"
      << std::setfill(' ') << std::setw(10)
      << "imazouaren" << "|" 
      << std::setfill(' ') << std::setw(10)
      << "noelectric" << "|" << std::endl
      << std::setfill('=') << std::setw(51) << "\033[0;0m" << std::endl;
    }
    
  return 0;
}