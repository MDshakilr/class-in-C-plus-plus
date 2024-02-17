#include<bits/stdc++.h>
using namespace std;
class student{
public:
    string name="shakil";
    int age=10;
    student()
    {
        cout<<"a student profile"<<endl;
cout<<"student name:"<< name<<endl;
cout<<"student age:"<<age <<endl;

    }
void printDetails(){

cout<<"student name:"<< name<<endl;
cout<<"student age:"<<age <<endl;

}


};
int main()
{
    student p1;
    p1.printDetails();

    return 0;
}
