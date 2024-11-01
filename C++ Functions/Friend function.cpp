#include <iostream>
using namespace std;

class Numbers {
    int a, b;

public:
   Numbers(int x, int y) : a(x), b(y) {}
    friend int product(Numbers);
};

int product(Numbers num) {
    return num.a * num.b;
}

int main() {
    int a, b;
    cout << "Enter the values of a and b: ";
    cin >> a >> b;
    Numbers num(a, b);

    cout << "The product of a and b: " << product(num) << endl;
    cout << "The product of a and b: " << product(num) << endl;
    cout << "The product of a and b: " << product(num) << endl;
    cout << "The product of a and b: " << product(num) << endl;

    return 0;
}

