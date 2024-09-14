#include<bits/stdc++.h>
using namespace std;

class A
{
   public:
void display()
{
   cout<<"Class A";
}
} ;
class B:public A
{
  public:
 void display()
{
 cout<<"Class B";
}
} ;
int main()
{
    B b;
    b.B::display();
    b.A::display();
}
