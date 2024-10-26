#include<iostream>
using namespace std;

class Number {
    int x, y;  // private member variables
public:
    Number() {
        x = 0;
        y = 0;
    }
    Number(int a, int b) {
        x = a;
        y = b;
    }
    void get(int &a, int &b) {
        a = x;
        b = y;
    }
    void set(int a, int b) {
        x = a;
        y = b;
    }
    void print() {
        cout << x << " ";
        cout << y << endl;
    }
    Number operator+(Number ob); // Operator overloading declaration
};

Number Number::operator+(Number ob) {
    Number tmp;
    tmp.x = x + ob.x;
    tmp.y = y + ob.y;
    return tmp;
}

int main() {
    Number n1(4, 6), n2(5, 7), n3(8, 0);
    n3 = n1 + n2;
    n3.print(); // Output should be 9 13
    return 0;
}

