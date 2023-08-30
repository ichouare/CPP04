#include "./WrongAnimal.hpp"


WrongAnimal::WrongAnimal():Type("any_anamil")
{
    std::cout << "default constructor  Wronganimal called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string Type):Type(Type)
{
    std::cout << "Parameterized  constructor  Wronganimal called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
     std::cout << "destructor  Wronganimal called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& originale)
{
    *this = originale;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& obj)
{
    this->Type = obj.Type;
    return(*this);
}

std::string WrongAnimal::getType() const 
{
    return Type;
}

void WrongAnimal::setType(const std::string type)
{
    this->Type = type;
}


void WrongAnimal::makeSound() const
{

}