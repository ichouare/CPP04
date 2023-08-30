#include "./WrongAnimal.hpp"


class WrongCat : public WrongAnimal{
    public:
    WrongCat();
    ~WrongCat();
    WrongCat(std::string Type);
    WrongCat (const WrongCat& original);
    WrongCat& operator=(const WrongCat& obj);
    void makeSound() const;
};