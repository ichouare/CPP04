#include "./Dog.hpp"


Dog::Dog()
{
    this->Type = "dog";
    DogBrain = new Brain();
     std::cout << "Constructors of Dog called" << std::endl;
}

Dog::Dog(std::string Type)
{
    this->Type = Type;
    DogBrain = new Brain();
    std::cout << " Parameterized Constructors of Dog called" << std::endl;
}

Dog::~Dog()
{
    std::cout << "destructor of Dog called" << std::endl;
    delete  DogBrain;
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
    std::cout << "bark" << std::endl;
}

