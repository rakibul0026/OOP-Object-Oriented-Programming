//interface in c++
#include<iostream>
#include<conio.h>
using namespace std;

class MobileUser
{
public :
    virtual void sendMassage()=0;
    void call()
    {
        cout<<"Hellow"<<endl;
    }
};

class Rahim : public MobileUser
{
    void sendMassage()
    {

        cout<<"Hi this is rahim"<<endl;
    }

};

class karim:public MobileUser
{
    void sendMassage()
    {

        cout<<"Hi this is kahim"<<endl;
    }

};
int main()
{
    MobileUser *m;

    Rahim ob1;
    karim ob2;

    m=&ob1;
    m->sendMassage();

    m=&ob2;
    m->sendMassage();


}

