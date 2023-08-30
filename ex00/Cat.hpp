#include "./Animal.hpp"


class Cat : public Animal{
    public:
    Cat();
    Cat(std::string Type);
    ~Cat();
    Cat (const Cat& original);
    Cat& operator=(const Cat& obj);
    void makeSound() const;
};