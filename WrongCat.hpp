#ifndef WRONG_CAT_H
#define WRONG_CAT_H

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

#endif