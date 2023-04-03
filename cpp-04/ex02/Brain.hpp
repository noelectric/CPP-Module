#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <iomanip>

class Brain{
    private :
        std::string _ideas[100];
        size_t _i;
    public :
        Brain(void);
        Brain(const Brain &br);
        Brain &operator=(const Brain &br);
        void setIdeas(const char *ideas);
        std::string getIdeas(size_t index);
        ~Brain(void);
};

#endif