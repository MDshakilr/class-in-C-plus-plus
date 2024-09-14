/*Create a Person class in C++ with the following attributes:

name (string)
age (integer)
gender (string)
Implement setter and getter methods for each attribute to set and retrieve their values respectively.

Additionally, write a main() function to demonstrate the use of these setter and getter methods.
 Instantiate a Person object, set its attributes using the setter methods, and then display these attributes using the getter methods.
*/
#include<bits/stdc++.h>
using namespace std;
class Person{
private :
    string name;
    int age;
    string gender;
public:
    void setname(string name)
    {
        this->name=name;

    }
    string getname()
    {
        return name;
    }
    void setage(int age)
    {
        this->age=age;

    }
    int getage()
    {
        return age;
    }
};
int main()
{
    Person p1;
    p1.setname("shakil");
    p1.setage(8);
    cout<<"Name:"<<p1.getname()<<endl;
    cout<<"Age:"<<p1.getage();
}
