#include<iostream>
using namespace std;
class swap
{
    int n1,n2,temp;
public:
    void take()
    {
        cout<<"Enter two number";
        cin>>n1>>n2;
    }
    void get()
    {
        temp=n1;
        n1=n2;
        n2=temp;
        cout<<n1<<" "<<n2;
    }
};
int main()
{
    swap obj;
    obj.take();
    obj.get();

}


