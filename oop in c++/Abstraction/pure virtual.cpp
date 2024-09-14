




#include<bits/stdc++.h>
using namespace std;
class  phone {
    public:

virtual void sendmessage()=0;
virtual void seenmessage()
{

}

};
class iphone:public phone
{
public:
    void sendmessage() override
    {
        cout<<"hi"<<endl;

    }
    void seenmessage()override
    {
        cout<<"fuu"<<endl;

    }
    

};
class xphone:public phone
{
    public:

    void sendmessage()override
    {
        cout<<"hello"<<endl;

    }

   void seenmessage()override
    {
        cout<<"oooo"<<endl;

    }
    

};
int main()
{
    /*phone *p1;
    xphone x;
    p1=&x;*/

    phone *p1= new xphone();
    p1->sendmessage();
    p1->seenmessage();

}
