#include "./Cat.hpp"


Cat::Cat()
{
    this->Type = "Cat";
    CatBrain = new Brain();
     std::cout << "Constructors of Cat called" << std::endl;
}

Cat::Cat(std::string Type)
{
    this->Type = Type;
    CatBrain = new Brain();
     std::cout << " Parameterized Constructors of Cat called" << std::endl;
}

Cat::~Cat()
{
    std::cout << "destructor of Cat called" << std::endl;
     delete  CatBrain;
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

