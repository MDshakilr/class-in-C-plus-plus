/*
   Imagine you're creating a virtual pet simulator game.
   Design a base class called `Animal` with properties like `name` and `sound`, representing different animals in the game.
    Derive classes `Dog`, `Cat`, and `Cow` from `Animal`, representing different types of pets.
     Implement member functions to make each animal object produce its respective sound.
      Test your code by creating objects of each derived class and simulating interactions with the virtual pets.

*/
#include<bits/stdc++.h>
using namespace std;
class Animal{
public:
    string name;
    string sound;
    virtual void nsound()=0;

};
class Dog:public Animal
{
    public:
    void nsound ()override
    {
        cout<<"gowww"<<endl;

    }
};
class Cat:public Animal
{ public:
    void nsound ()override
    {
        cout<<"meooo"<<endl;

    }
};
class Cow:public Animal
{public:
    void nsound ()override
    {
        cout<<"hambaaa"<<endl;

    }
};

int main()
{
Animal *A=new Cow();
A->nsound();
A=new Cat();
A->nsound();

}


