#include <iostream>
using namespace std;

class Animal {
public:
    virtual void makeSound() {
    cout << "Animal sound" << endl;
    }
};

class Dog : public Animal {
public:
    void makeSound() override {
        cout << "Woof!" <<endl;
    }
};

int main() {
    Animal* ptr1 = new Animal(); // Pointer to base class object
    Animal* ptr2 = new Dog();    // Pointer to derived class object

    ptr1->makeSound(); // Output: "Animal sound"
    ptr2->makeSound(); // Output: "Woof!"

    /*delete ptr1;
    delete ptr2;*/
    return 0;
}

