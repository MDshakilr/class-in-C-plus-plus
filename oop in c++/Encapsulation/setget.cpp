/*#include <bits/stdc++.h>
using namespace std;
class student {

private :
    string name;
public:
    void setname (string name)
    {
        this ->name =name;
        cout<< name<<endl;
    }

};
int main ()
{
    student s1;
    s1.setname("shakil");

}




*/
#include <bits/stdc++.h>
using namespace std;
class student {

private :
    string name;
public:
    void setname (string name)
    {
        this ->name =name;

    }
    string getname()

    {
        return name;
    }
};
int main ()
{
    student s1;
    s1.setname("shakil");


    cout<<s1.getname()<<endl;
}
