#include<iostream>
using namespace std;
class CSTU
{
public:
    CSTU()
    {
        cout<<"this is constructor\n";
    }
    ~ CSTU()
    {
        cout<<"this is Disconstructor\n";
    }

};
main()
{
    CSTU t;
}

