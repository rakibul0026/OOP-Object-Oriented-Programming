#include<iostream>
using namespace std;
class test
{
    int a,b;
public :
    test()
    {
        a=0;
        b=0;
    }
    test(int x, int y)
    {
        a=x;
        b=y;
    }
    test operator+(test t);
    void disp()
};
test test:: operator+(test t)
{
    test temp;
    temp.a=a+t.a;
    temp=b+ t.b;
    return  temp;
}
void  test::dis()
{
    cout << "\n value of A" << a endl;
    cout << "\n value of B" << b endl;

}
int main()
{
    test t1,t2,t3;
    t1=test(10,20);
    t2=test(30,40);
    t3=t1+t2;
    t1.dis();
    t2.dis();
    t3.dis();
    return 0;
}

