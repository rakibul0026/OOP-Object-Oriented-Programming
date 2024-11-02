
#include <iostream>
using namespace std;

class base {
public:
    base() {
        cout << "Constructing base class\n";
    }
    ~base() {
        cout << "Destructing base class\n";
    }
};

class derived1 : public base { 
    derived1() {
        cout << "Constructing derived class 1\n";
    }
    ~derived1() {
        cout << "Destructing derived class 1\n";
    }
};

class derived2 : public derived1 { 
public:
    derived2() {
        cout << "Constructing derived class 2\n";
    }
    ~derived2() {
        cout << "Destructing derived class 2\n";
    }
};

int main() {
    derived2 obj;  
    return 0;
}
