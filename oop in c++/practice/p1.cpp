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
};
class Derived : public Base
{
	public:
		void display()
		{
			cout<<"This is derived class"<<endl;
		}
};
int main()
{
	Derived d;
	d.display();
	return 0;
}

