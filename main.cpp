#include "./Animal.hpp"
#include "./Cat.hpp"
#include "./Dog.hpp"
#include "./WrongCat.hpp"
#include "./WrongAnimal.hpp"


void test()
{
    system("leaks ./animal");
}
int main()
{
    atexit(test);
const Animal* j = new Dog();
const Animal* i = new Cat();

Animal *arr[]= {
    new Dog(),
    new Dog(),
    new Cat(),
    new Cat(),
};
int y = 0;
while(y < 4)
{
    arr[y]->makeSound();
    y++;
}
 y = 0;
while(y < 4)
{
    delete arr[y];
    y++;
}
// delete j;//should not create a leak
// delete i;
while(1);
return 0;
}