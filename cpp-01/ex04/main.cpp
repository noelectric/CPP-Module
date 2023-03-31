#include <fstream>
#include <iostream>
#include <iomanip>

#define EOC "\033[0;0m"
#define RED "\033[1;31m"

int main(int argc, char *argv[])
{
    if (argc == 4)
    {
        std::string const filename = argv[1];
        std::string const new_val = argv[3];
        std::string const old_val = argv[2];
        std::ifstream infile(filename.c_str());
        if(infile.is_open() == false){
            std::cout << RED << "Infile Error !!" 
            << EOC << std::endl;
            return 1;
        }
        std::ofstream outfile(std::string(filename + ".replace").c_str());
        if(outfile.is_open() == false){
            std::cout << RED << "Outfile Error !!" 
            << EOC << std::endl;
            return 1;
        }
        std::string line;
        while (!infile.eof())
        {
            std::getline(infile, line);
            for (size_t i = 0; i < line.size(); i++)
            {
                if (old_val == "" || new_val == "")
                    break;
                i = line.find(old_val, i);
                if (i == std::string::npos)
                    break;
                line.erase(i, old_val.length());
                line.insert(i, new_val);
            }
            outfile << line << "\n";
        }   
    }
    else
        std::cout << RED << "Wrong arg !!" 
            << EOC << std::endl;
    return 0; 
}