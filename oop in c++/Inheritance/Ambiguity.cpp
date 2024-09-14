/*#include <iostream>
using namespace std;
class A
{
    public:
    void display()
    {
        std::cout << "Class A" << std::endl;
    }
};
class B
{
    public:
    void display()
    {
        std::cout << "Class B" << std::endl;
    }
};
class C : public A, public B
{public:
    void display()
    {

    }
};
int main()
{
    C c;
    c.A::display();
    return 0;
}
*/
#include <iostream>
using namespace std;

class A
{
public:
    void displayA()
    {
        std::cout << "Class A" << std::endl;
    }
};

class B
{
public:
    void displayB()
    {
        std::cout << "Class B" << std::endl;
    }
};

class C : public A, public B
{
public:
    void view()
    {
        // Call display() from class A
        A::displayA();
        // Call display() from class B
        B::displayB();
    }
};

int main()
{
    C c;
    // You can explicitly call the display function from either class A or class B
    //c.displayA();
   // c.displayB();
   c.view();
    return 0;
}
