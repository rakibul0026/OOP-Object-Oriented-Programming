#include<iostream>
#include<conio.h>
using namespace std;

class demo {
    int a, b;
public:
    demo(int x, int y) {
        a = x;
        b = y;
    }
    void show() {
        cout << "a: " << a << endl;
        cout << "b: " << b << endl;
    }
    void operator-() {
        a = -a;
        b = -b; // Corrected this line
    }
};

int main() {
    demo ob(10, 20);
    ob.show();
    -ob;
    ob.show();
    return 0;
}

