
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
		Base(int x, int y, int z)
		{
			this->x = x;
			this->y = y;
			this->z = z;
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
};
class Derived : public Base
{
	public:
		Derived(int x, int y, int z) : Base(x, y, z){ }
		void display()
		{
			cout<<"This is derived class"<<endl;
		}
};
int main()
{
	Derived d(10, 20, 30);
	d.show_x();
	d.show_y();
	d.show_z();
	d.display();
	return 0;
}

