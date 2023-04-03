#include "Brain.hpp"

Brain::Brain(void):_i(0){
    std::cout << "Brain Default constructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &br){
    std::cout << "Brain Assignement operator called" << std::endl;
    if (this != &br)
        for (size_t i = 0; i < 100; i++)
            this->_ideas[i] = br._ideas[i];    
    return (*this);
}

Brain::Brain(const Brain &br){
    std::cout << "Brain Copy constructor called" << std::endl;
    *this = br;
}

Brain::~Brain(void){
    std::cout << "Brain Default destructor called" << std::endl;
}

void Brain::setIdeas(const char *ideas){
    if (!ideas)
        return ;
    this->_ideas[this->_i] = ideas;
    _i++;
}

std::string Brain::getIdeas(size_t index){
    if (index < 100 && _i < 100)
        return _ideas[index];
    return (NULL);
}
