#include<iostream>
using namespace std;
class A
{
	protected:
		int x;
	public:
		A()
		{
			cout<<"Super class A's constructor"<<endl;
		}
		void read()
		{
			cout<<"Enter value of x: ";
			cin>>x;
		}
		void show()
		{
			cout<<"x = "<<x;
		}
};
class B : virtual public A
{
	public:
		B()
		{
			cout<<"Sub class B's constructor"<<endl;
		}
};
class C : virtual public A
{
	public:
		C()
		{
			cout<<"Sub class C's constructor"<<endl;
		}
};
class D: public B, public C
{
	public:
		D()
		{
			cout<<"Sub class D's constructor"<<endl;
		}
};
int main()
{
	D objD;
	objD.read();
	objD.show();
	return 0;
}

