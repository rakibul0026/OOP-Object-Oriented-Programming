#include<iostream>
#include<conio.h>
using namespace std;

class demo {
    int a, b;
public:
    demo() {}

    demo(int x, int y) {
        a = x;
        b = y;
    }

    void show() {
        cout << "a: " << a << endl;
        cout << "b: " << b << endl;
    }

    friend demo operator+(const demo &obj, const demo &obj2);
};

demo operator+(const demo &obj, const demo &obj2) {
    demo temp;
    temp.a = obj.a + obj2.a;
    temp.b = obj.b + obj2.b;
    return temp;
}

int main() {
    demo ob(10, 20), ob1(30, 40), ob2;
    ob2 = ob + ob1;
    ob2.show();
    return 0;
}

