#include "./Animal.hpp"
#include "./Cat.hpp"
#include "./Dog.hpp"
#include "./WrongCat.hpp"
#include "./WrongAnimal.hpp"




int main()
{

// const Animal* j = new Dog();
// const Animal* i = new Cat();

Animal *arr[2] = {
    new Dog("dd"),
    new Cat("ll"),
};
int y = 0;

// Cat basic("Sphynx");
//     {
//         Cat tmp2 = basic;
//         std::cout << tmp2.getType() << '\n'; 
//     }
//     // copy is a local variable, so it gets destroyed here.  The destructor deletes copy's string, which leaves hello with a dangling pointer
//     std::cout << basic.getType() << '\n';
 
    // Dog basic1("Beagle");
    //     {
    //         Dog tmp2 = basic1;
    //         std::cout << tmp2.getType() << '\n'; 
    //     }
    //     // copy is a local variable, so it gets destroyed here.  The destructor deletes copy's string, which leaves hello with a dangling pointer
    // std::cout << basic1.getType() << '\n';
    // j->makeSound();
    while(y < 2)
    {
        arr[y]->makeSound();
        y++;
    }

    y = 0;
    while(y < 2)
    {
        delete arr[y];
            y++;
    }
    // delete j;//should not create a leak
    // delete i;
    return (0);
}
