
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
public:
    derived1() {
        cout << "Constructing derived class 1\n";
    }
    ~derived1() {
        cout << "Destructing derived class 1\n";
    }
};

class derived2 : public base {  
public:
    derived2() {
        cout << "Constructing derived class 2\n";
    }
    ~derived2() {
        cout << "Destructing derived class 2\n";
    }
};

class derived3 : public base { 
public:
    derived3() {
        cout << "Constructing derived class 3\n";
    }
    ~derived3() {
        cout << "Destructing derived class 3\n";
    }
};

int main() {
    derived1 obj1; 
    derived2 obj2;  
    derived3 obj3; 
    return 0;
}
