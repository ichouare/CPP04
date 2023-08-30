#include "./Animal.hpp"


class Dog : public Animal{
    public:
    Dog();
    Dog(std::string Type);
    ~Dog();
    Dog (const Dog& original);
    Dog& operator=(const Dog& obj);
    void makeSound() const;
};