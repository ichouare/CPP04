
#include "./Brain.hpp"

Brain::Brain()
{
    std::cout << "default constructor Brain callled" << std::endl;
}

Brain::~Brain()
{
     std::cout << "default destructor Brain callled" << std::endl;
}

Brain::Brain(const Brain& originale)
{
    (*this) = originale;
}

Brain& Brain::operator=(const Brain& obj)
{
    int i = 0;
    while(i < 100)
        this->ideas[i] = obj.ideas[i];
    return(*this);
}

