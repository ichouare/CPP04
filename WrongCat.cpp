#include "./WrongCat.hpp"


WrongCat::WrongCat()
{
    this->Type = "WrongCat";
     std::cout << "Constructors of WrongCat called" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "destructor of WrongCat called" << std::endl;
}

WrongCat::WrongCat(std::string Type)
{
    this->Type = Type;
    std::cout << "Parameterized constrctor  of WrongCat called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& original)
{
    (*this) = original;
}


WrongCat& WrongCat::operator=(const WrongCat& obj)
{
    this->Type = obj.Type;
    return (*this);
}


void WrongCat::makeSound() const
{
    std::cout<< "moew" << std::endl;
}