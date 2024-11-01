
#include<iostream>
using namespace std;
struct employee
{
    int eId;
    char favChar;
    long  double salary;
};

int main()
{
    struct employee harry;
    harry.eId=1;
    harry.favChar='c';
    harry.salary=1200000;

    struct employee borsha;

    borsha.eId=6;
    borsha.favChar='tu';
    borsha.salary=1000000;

    /*struct employee torju;
    harry.eId;
    harry.favChar;
    harry .salary;*/
    cout<<"the value  is:"<<harry.eId<<endl;
    cout<<"the value  is:"<<harry.favChar<<endl;
    cout<<"the value  is:"<<harry.salary<<endl;
    cout<<"the value  is:"<<borsha.eId<<endl;
    cout<<"the value  is:"<<borsha.favChar<<endl;
    cout<<"the value  is:"<<borsha.salary<<endl;
    return 0;

}

