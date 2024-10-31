#include<iostream>
using namespace std;

class Base1
{
public :
    void greed()
    {
        cout<<"How are you"<<endl;

    }
};
class Base2
{
public :
    void greed()
    {
        cout<<"how old are you "<<endl;

    }
};
class Derived : public Base1,public Base2
{
public :
    void greed()
    {
        Base2::greed();
    }


};
int main()
{

    Base1 ob1;
    ob1.greed();

    Base2 ob2;
    ob2.greed();

    Derived d;
    d.greed();


    return  0;

}

