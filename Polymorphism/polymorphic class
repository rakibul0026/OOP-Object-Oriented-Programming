#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void makeSound()
    {
        cout << "Animal sound" << endl;
    }
};

class Dog : public Animal
{
public:
    void makeSound()
    {
        cout << "Woof!" << endl;
    }
};

int main()
{
    Animal* ptr = new Dog(); // Polymorphic behavior
    ptr->makeSound(); // Output depends on the actual object type
    delete ptr;
    return 0;
}

