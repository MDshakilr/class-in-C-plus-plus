/*#include<iostream>
using namespace std;
class A
{
	protected:
		int x;
	public:
		void show()
		{
			cout<<"x = "<<x<<endl;
		}
};
class B : public A
{
	protected:
		int y;
	public:
		B(int x, int y)
		{
			this->x = x;
			this->y = y;
		}
		void show()
		{
			cout<<"x = "<<x<<endl;
			cout<<"y = "<<y<<endl;
		}
};
int main()
{
	A objA;
	B objB(30, 20);
	objA = objB;	//Assign derived class object to base class object
	objA.show();
	return 0;
}
*/

/*
#include<iostream>
using namespace std;
class A
{
	protected:
		int x;
	public:
		void show()
		{
			cout<<"x = "<<x<<endl;
		}
};
class B : public A
{
	protected:
		int y;
	public:
		B(int x, int y)
		{
			this->x = x;
			this->y = y;
		}
		void show()
		{
			cout<<"x = "<<x<<endl;
			cout<<"y = "<<y<<endl;
		}
};
int main()
{
	A *bptr;
	B objB(30, 20);
	bptr = &objB;	//Assign derived class object to base class pointer
	bptr->show();
	return 0;
}
*/


#include<iostream>
using namespace std;
class A
{
	protected:
		int x;
	public:
		void show()
		{
			cout<<"x = "<<x<<endl;
		}
};
class B : public A
{
	protected:
		int y;
	public:
		B(int x, int y)
		{
			this->x = x;
			this->y = y;
		}
		void show()
		{
			cout<<"x = "<<x<<endl;
			cout<<"y = "<<y<<endl;
		}
};
int main()
{
	A *bptr=new B(30, 20);

		//Assign derived class object to base class pointer
	bptr->show();
	return 0;
}
