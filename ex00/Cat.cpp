#include "./Cat.hpp"


Cat::Cat()
{
    this->Type = "Cat";
    std::cout << "Constructors of Cat called" << std::endl;
}

Cat::Cat(std::string Type)
{
    this->Type = Type;
     std::cout << " Parameterized Constructors of Cat called" << std::endl;
}

Cat::~Cat()
{
    std::cout << "destructor of Cat called" << std::endl;
}

Cat::Cat(const Cat& original)
{
    (*this) = original;
}


Cat& Cat::operator=(const Cat& obj)
{
    this->Type = obj.Type;
    return (*this);
}


void Cat::makeSound() const
{
    std::cout<< "moew" << std::endl;
}

