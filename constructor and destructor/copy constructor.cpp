/*What is copy constructor.writing a example of copy constructor.
Copy constructor is used to initialize the members of a newly created object by copying the members of an already existing object.
Another
copy constructor is a special constructor for creating a new object as a copy of an existing object. */

#include<iostream>
using namespace std;
class Example
{
public:
    int a,b;
    Example()
    {
        cout<<"default constructor:\n";
        a=b=0;

    }
    Example(int x,int y)
    {
        cout<<"parameterized constructor:"<<endl;
        a=x;
        b=y;
    }


    Example(Example & obj)
    {
        cout<<"copy constructor:";
        a=obj.a;
        b=obj.b;
    }

    void display()
    {
        cout<<"a="<<a<<endl;
        cout<<"b="<<b<<endl<<endl;
    }
};
int main()

{
    Example obj1;
    obj1.display();
    Example obj2(10,15);
    obj2.display();
    Example obj3(obj1);
    obj3.display();

    return 0;
}




