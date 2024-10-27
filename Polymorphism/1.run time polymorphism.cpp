#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void draw() // Virtual function for runtime polymorphism
    {
        cout << "Drawing a generic shape" << endl;
    }
};

class Circle : public Shape
{
public:
    void draw() override // Overriding the base class function
    {
        cout << "Drawing a circle" << endl;
    }
};

class Rectangle : public Shape
{
public:
    void draw() override // Overriding the base class function
    {
        cout << "Drawing a rectangle" << endl;
    }
};

int main()
{
    Shape* shape1 = new Circle();     // Pointer to base class holding derived class object
    Shape* shape2 = new Rectangle();  // Pointer to base class holding another derived class object
    
    shape1->draw(); // Calls Circle's draw()
    shape2->draw(); // Calls Rectangle's draw()

    delete shape1;
    delete shape2;
    
    return 0;
}
