#include <iostream>
using namespace std;

template <class T>
class Add
{
public:

    T add(T a, T b)
    {
        return a + b;
    }


    T add(T a, T b, T c)
    {
        return a + b + c;
    }
};

int main()
{
    Add<int> intAdder;
    cout << intAdder.add(10, 20) << endl;
    cout << intAdder.add(10, 20, 30) << endl;
    return 0;
}
