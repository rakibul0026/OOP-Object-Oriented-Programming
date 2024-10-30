
#include<iostream>
using namespace std;
class MobileUser
{
public:
    void call()
    {
        cout<<"hellow!"<<endl;  //No virtual function
    }
    virtual void sendMessage()=0;

};

class kahim : public MobileUser
{
    void sendMessage()
    {

        cout<<"hi,love for this\n";

    }
};
int main()
MobileUser *m;
Rahim r;
Karim k;
m=&r;
m->sendMessage();



}






