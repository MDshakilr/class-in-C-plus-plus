#include <iostream>
using namespace std;
class Base
{
	private:
		int x;
	protected:
		int y;
	public:
		int z;
		Base()
		{
			cout<<"Base class constructor is called"<<endl;
		}
		void show_x()
		{
			cout<<"x = "<<x<<endl;
		}
		void show_y()
		{
			cout<<"y = "<<y<<endl;
		}
		void show_z()
		{
			cout<<"z = "<<z<<endl;
		}
		~Base()
		{
			cout<<"Base class destructor is called"<<endl;
		}
};
class Derived : public Base
{
	public:
		Derived()
		{
			cout<<"Derived class constructor is called"<<endl;
		}
		void display()
		{
			cout<<"This is derived class"<<endl;
		}
		~Derived()
		{
			cout<<"Derived class destructor is called"<<endl;
		}
};
int main()
{
	Derived d;
	d.display();
	return 0;
}
