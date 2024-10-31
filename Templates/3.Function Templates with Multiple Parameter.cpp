// Function Templates with Multiple Parameter
#include<iostream>
#include<conio.h>
using namespace std;
template<class T1,class T2>
T1 add(T1 a,T2 b)
{

    return a+b;
}
int main()
{

    cout<<add(10.5,20)<<endl;

}

