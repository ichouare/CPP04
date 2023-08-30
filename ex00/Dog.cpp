#include "./Dog.hpp"


Dog::Dog()
{
    this->Type = "dog";
     std::cout << "Constructors of Dog called" << std::endl;
}

Dog::Dog(std::string Type)
{
        this->Type = Type;
     std::cout << " Parameterized Constructors of Dog called" << std::endl;
}

Dog::~Dog()
{
    std::cout << "destructor of Dog called" << std::endl;
}

Dog::Dog(const Dog& original)
{
    (*this) = original;
}


Dog& Dog::operator=(const Dog& obj) 
{
    this->Type = obj.Type;
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "Woof" << std::endl;
}

