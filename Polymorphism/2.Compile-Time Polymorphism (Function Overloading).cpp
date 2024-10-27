/*Compile-time polymorphism in C++ can be achieved through function overloading and operator overloading.*/
#include <iostream>
using namespace std;

class Calculator
{
public:
    // Function overloading for `add` function
    int add(int a, int b)
    {
        return a + b;
    }

    double add(double a, double b)
    {
        return a + b;
    }

    int add(int a, int b, int c)
    {
        return a + b + c;
    }
};

int main()
{
    Calculator calc;
    
    cout << "Addition of two integers: " << calc.add(5, 10) << endl;
    cout << "Addition of two doubles: " << calc.add(5.5, 10.3) << endl;
    cout << "Addition of three integers: " << calc.add(5, 10, 15) << endl;

    return 0;
}

