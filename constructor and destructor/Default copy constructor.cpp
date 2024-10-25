#include <iostream>
using namespace std;
class Example
{
public:
    int a,b;
    Example  ()
    {
        a=b=0;
    }
    Example (int x,int y)
    {
        a=x;
        b=y;
    }
    void display()
    {
        cout<<"a="<<a<<endl;
        cout<<"b="<<b<<endl;
    }


};

int main ()
{
    Example  ob1;
    ob1.display();

    Example  ob2(5,8);
    ob2.display();

    Example  ob3(ob2);
    ob3.display();
    return 0;
}

