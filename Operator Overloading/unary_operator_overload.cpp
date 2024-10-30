#include<iostream>
using namespace std;
class space
{
    int x,y;
public:
    void getdata(int a,int b);
    void display(void);
    void operator-();
};
void space:: getdata(int a,int b)
{
    x=a;
    y=b;

}
void space:: display(void)

{
 cout<<"x="<<x<<endl;
cout<<"y="<<y<<endl;
}
void space:: operator-()
{
    x=-x;
    y=-y;
}
int main()
{
    space s;
    s.getdata(6,8);
    cout<<"s:";
   s. display();
   -s;

   cout<<"-s:";
    s. display();

}

