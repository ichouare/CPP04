#include "./Animal.hpp"


Animal::Animal():Type("any_anamil")
{
    std::cout << "default constructor  animal called" << std::endl;
}

Animal::Animal(std::string Type):Type(Type)
{
    std::cout << "Parameterized  constructor  animal called" << std::endl;
}


Animal::~Animal()
{
     std::cout << "destructor  animal called" << std::endl;
}

Animal::Animal(const Animal& originale)
{
    *this = originale;
}

Animal& Animal::operator=(const Animal& obj)
{
    this->Type = obj.Type;
    return(*this);
}

std::string Animal::getType() const 
{
    return Type;
}

void Animal::setType(const std::string type)
{
    this->Type = type;
}


void Animal::makeSound() const
{
    // std::cout << "not sound to make" << std::endl;
}