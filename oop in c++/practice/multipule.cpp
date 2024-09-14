/*3. Multiple Inheritance Problem:

   Suppose you're developing a student management system for a school.
Define a base class called `Student` with properties like `name` and `rollNumber`, representing basic student information.
    Create another base class `Test` with properties like `marks` and `grade`, representing test results.
     Derive a class `Result` from both `Student` and `Test` to represent combined student information and test results.
Implement member functions to input student details and test marks, and to display the student's name, roll number, marks, and grade.
Test your code by creating objects representing student results.
*/


/*#include<bits/stdc++.h>
using namespace std;
class Student{
public:
    string name;
    int rollNumber;


};
class Test{

public:
    int mark;
    string grade;

};
class Result:public Student,public Test
{
    public:
    Result(string xname,int nrollNumber,int nmark,string ngrade)
    {
       name=xname;
       rollNumber=nrollNumber;
       mark=nmark;
       grade=ngrade;
    }

    void display()
    {
    cout<<name<<endl;
    cout<<rollNumber<<endl;
    cout<<mark<<endl;
    cout<<grade<<endl;
    }
};
int main()
{
    Result r1("shakil",23, 40,"a");
    r1.display()
;}
*/
#include <iostream>
#include <string>
using namespace std;

class Student {
protected:
    string name;
    int rollNumber;

public:
     virtual void inputStudentDetails() {
        cout << "Enter student's name: ";
        cin>>name;
        std::cout << "Enter roll number: ";
        std::cin >> rollNumber;
        // To clear the newline character from the input buffer
    }

    virtual void displayStudentDetails() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Roll Number: " << rollNumber << std::endl;
    }
};

class Test {
protected:
    float marks;
    char grade;

public:
     virtual void inputTestDetails() {
        std::cout << "Enter marks: ";
        std::cin >> marks;
        std::cout << "Enter grade: ";
        std::cin >> grade;
        std::cin.ignore(); // To clear the newline character from the input buffer
    }

     virtual void displayTestDetails()  {
        std::cout << "Marks: " << marks << std::endl;
        std::cout << "Grade: " << grade << std::endl;
    }
};

class Result : public Student, public Test {
public:
    void inputDetails() {
        inputStudentDetails();
        inputTestDetails();
    }

    void displayDetails()  {
        displayStudentDetails() ;
        displayTestDetails();
    }
};

int main() {
    Result studentResult;
    studentResult.inputDetails();
    std::cout << "\nStudent Result Details:\n";
    studentResult.displayDetails();
    return 0;
}
